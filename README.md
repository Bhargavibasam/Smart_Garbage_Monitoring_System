# 🗑️ Smart Garbage Monitoring System using IoT

## 📌 Project Overview
The **Smart Garbage Monitoring System** is an IoT-based project designed to optimize waste collection using real-time level detection and automated alerts. This system uses ultrasonic and IR sensors integrated with a microcontroller to detect garbage levels and trigger a buzzer when the bin is full. It also includes a servo motor to automatically open and close the bin lid for hygienic waste disposal.



## 🎯 Key Features
- **Ultrasonic Distance Detection**: Monitors bin fill level using distance measurement.
- **IR Object Detection**: Detects nearby motion indicating disposal intent.
- **Servo-Based Lid Control**: Automatically opens/closes the bin lid based on proximity.
- **Overflow Alert System**: Activates a buzzer when the garbage bin is full.
- **Scalable & Low-Cost**: Easily deployable in public places, homes, or institutions.


## 🔧 Technologies Used
- **NodeMCU ESP8266** – Microcontroller unit
- **Ultrasonic Sensor (HC-SR04)** – Distance measurement
- **IR Sensor** – Object detection
- **Servo Motor** – Bin lid control
- **Buzzer** – Overflow alert
- **Arduino IDE** – Programming platform
- **Embedded C** – Code development



## 🚀 Working
1. IR sensor detects someone near the bin.
2. Servo motor opens the lid.
3. Ultrasonic sensor checks garbage level.
4. If garbage is within 10 cm of the sensor, the buzzer turns on.
5. Otherwise, it remains off and the lid operates as needed.


## 📷 Output Demonstrations
- 🔊 **Buzzer Alert** when bin is full
- 🤖 **Servo Action** opens/closes lid based on motion
- 📉 **Serial Monitor** shows live distance data



## 🧪 Applications
- 🏠 **Smart Homes** – Auto-detection and alerts
- 🏢 **Office Buildings** – Reduced manual bin checks
- 🏞️ **Public Places** – Overflow prevention
- 🏥 **Hospitals** – Contactless hygienic disposal


## 🔮 Future Scope
- Add Wi-Fi (MQTT/HTTP) for remote bin status
- Connect to a dashboard for garbage analytics
- Predict garbage trends using ML
- Integrate solar-powered modules


## 📜 Contributors
- Basam Bhargavi – https://github.com/Bhargavibasam

