#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <Servo.h>
#include <Ticker.h>

const char* ssid = "YourWiFiSSID";
const char* password = "YourWiFiPassword";

ESP8266WebServer server(80); // Web server on port 80
Servo servo1, servo2, servo3;

Ticker timer;  // Create a ticker object

void setup() {
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  // Initialize servos
  servo1.attach(D1); // GPIO5 for Servo 1
  servo2.attach(D2); // GPIO4 for Servo 2
  servo3.attach(D3); // GPIO0 for Servo 3

  // Set all servos to home position
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);

  // Define root page
  server.on("/", []() {
    server.send(200, "text/plain", "ESP8266 Servo Controller is running");
  });

  // Define /move endpoint
  server.on("/move", []() {
    if (server.hasArg("servo") && server.hasArg("angle")) {
      int servoNum = server.arg("servo").toInt();
      int angle = server.arg("angle").toInt();

      switch (servoNum) {
        case 1:
          servo1.write(angle);
          break;
        case 2:
          servo2.write(angle);
          break;
        case 3:
          servo3.write(angle);
          break;
        default:
          server.send(400, "text/plain", "Invalid servo number");
          return;
      }
      server.send(200, "text/plain", "Moved servo " + String(servoNum) + " to " + String(angle));
    } else {
      server.send(400, "text/plain", "Missing parameters");
    }
  });

  // Start the server
  server.begin();

  // Set the timer to call moveServos() every 60 seconds (60000 ms)
  timer.attach(60, moveServos);
}

void loop() {
  server.handleClient();  // Handle incoming client requests
}

// Function to move the servos
void moveServos() {
  // Move all servos to 90° (you can change this as needed)
  servo1.write(180);
  servo2.write(180);
  servo3.write(180);
} 

