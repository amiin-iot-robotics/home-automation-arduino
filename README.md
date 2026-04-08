# 🏠 Home Automation System using Arduino & MIT App Inventor

## 📌 Description
This project is a smart home automation system developed using Arduino and MIT App Inventor. It allows users to control home appliances such as lights, fan, and socket wirelessly via Bluetooth. The system also includes a fire detection feature for safety.

---

## 🚀 Features
- 📱 Control devices using mobile app (MIT App Inventor)
- 💡 Control white lamp and green lamp
- 🌀 Control fan
- 🔌 Control power socket
- 🔥 Fire detection using flame sensor
- 🚨 Buzzer alert when fire is detected
- 📟 LCD display for system status
- 🔐 Servo motor for door/lock control
- 🎤 Voice control support (via app commands)

---

## 🧰 Components Used
- Arduino Uno
- HC-05 Bluetooth Module
- Flame Sensor
- Servo Motor
- LCD I2C (16x2)
- Relay Module / Output devices
- Buzzer
- LEDs (Red & Green)
- Power Supply

---

## 🔌 Pin Configuration

| Component        | Pin |
|----------------|-----|
| White Lamp     | 12  |
| Green Lamp     | 11  |
| Fan            | 10  |
| Socket         | 8   |
| Flame Sensor   | 6   |
| Buzzer         | 5   |
| Green LED      | 4   |
| Red LED        | 3   |
| Servo Motor    | 7   |

---

## ⚙️ How It Works
- The system receives commands from a mobile app via Bluetooth.
- Based on the received data, it controls home appliances.
- The flame sensor continuously monitors fire conditions.
- If fire is detected:
  - LCD displays warning message
  - Buzzer and red LED activate
- Servo motor is used for automation (e.g., door control).

---

## 📱 Mobile App
The mobile application is developed using MIT App Inventor:
- Button control for devices
- Voice command support
- Bluetooth communication with Arduino

---

## 🖼️ Project Files
- Circuit Diagram (upload image here)
- MIT App Inventor Blocks (upload image here)
- Arduino Code (included in repository)

---

## ▶️ How to Use
1. Upload the Arduino code to your board
2. Connect all components as per circuit diagram
3. Pair mobile with HC-05 Bluetooth module
4. Open the mobile app
5. Control devices and monitor system

---

## ⚠️ Safety Features
- Fire detection with immediate alert
- Visual (LCD + LED) and sound (buzzer) warning system

---

## 👨‍💻 Author
Mohamed Amiin  
Electrical Engineer | IoT & Robotics Developer  

---

## 📌 Future Improvements
- WiFi control (ESP32)
- Mobile app UI enhancement
- Cloud monitoring system
- Smart scheduling
