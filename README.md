# Smart Medicine Dispenser System

A smart, automated medicine dispensing system designed to ensure timely and accurate medication intake. The system integrates embedded systems, sensors, and wireless communication to improve patient adherence and reduce human error.

---

## Project Overview

Medication non-adherence is a major challenge in healthcare, especially among elderly and chronically ill patients. This project presents a smart medicine dispenser that automates the process of dispensing medication at scheduled times and provides real-time alerts to users and caregivers.

The system is designed to be reliable, user-friendly, and scalable, making it suitable for both home and clinical environments.

---

## Key Features

- Automated medicine dispensing based on time schedule  
- Servo motor-based controlled release mechanism  
- Real-time clock-based scheduling system  
- Audio and visual alerts using buzzer and display  
- Pill detection using piezoelectric sensor  
- Wi-Fi-based remote monitoring and notifications  
- Battery-powered operation for uninterrupted usage  

---

## System Architecture

- Controller: Raspberry Pi 4  
- Actuator: Servo Motor (SG90)  
- Sensors: Piezoelectric Sensor  
- Communication: Wi-Fi (ESP8266)  
- Power: Lithium-ion Battery  
- User Interface: LCD / OLED Display, Buzzer  

---

## Working Principle

1. The system initializes and loads the medication schedule  
2. Current time is continuously monitored  
3. When scheduled time is reached:
   - Servo motor rotates to dispense one pill  
   - Piezoelectric sensor detects pill drop  
4. If dispensing is successful:
   - System logs the event  
5. If dispensing fails:
   - Alert is triggered  
6. Notifications are sent via Wi-Fi to user/caregiver  

---

## Hardware Components

- Raspberry Pi 4  
- Servo Motor (SG90)  
- Piezoelectric Sensor  
- ESP8266 Wi-Fi Module  
- Lithium-ion Battery (3.7V)  
- LCD/OLED Display  
- Buzzer  

---

## Software Stack

- Python  
- RPi.GPIO  
- Time module (scheduling)  
- smtplib (notifications)  
- Embedded C (ESP8266 control)

---

---

## Applications

- Home healthcare for elderly patients  
- Hospitals and clinics  
- Rehabilitation centers  
- Remote patient monitoring systems  

---

## Advantages

- Reduces medication errors  
- Improves patient adherence  
- Reduces caregiver workload  
- Enables remote monitoring  
- Cost-effective and scalable  

---

## Limitations

- Not suitable for liquid medications  
- Requires initial setup and scheduling  
- Limited to predefined dosing patterns  

---

## Future Improvements

- Mobile application integration  
- AI-based personalized medication scheduling  
- Camera-based verification system  
- Voice assistant integration  
- Multi-user support system  

---

## Results

The system was tested under multiple scenarios and demonstrated reliable performance in:
- Accurate time-based dispensing  
- Successful pill detection  
- Stable wireless communication  
- Continuous operation using battery backup  

---

## Authors

Varun K  

---

## Acknowledgement

Developed as part of Mechatronics Engineering coursework at SRM Institute of Science and Technology under the guidance of faculty.

---

## Note

This project demonstrates the application of embedded systems and IoT in healthcare automation, aiming to improve patient safety and medication adherence.
