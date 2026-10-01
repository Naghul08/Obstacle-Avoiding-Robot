# 🤖 4-Wheel Obstacle Avoiding Robot

An autonomous mobile robot built using **Arduino, HC-SR04 ultrasonic sensor, L293D motor driver, and four DC geared motors**. The robot detects obstacles in its path and automatically changes direction to avoid collisions.

## ⚙️ How It Works

The HC-SR04 ultrasonic sensor continuously measures the distance in front of the robot. The Arduino processes the sensor data and controls the motors through the L293D motor driver.

When an obstacle is detected within the set distance, the robot:

1. Stops
2. Moves backward
3. Changes direction
4. Continues moving forward

## 🛠️ Components Used

| Component | Quantity |
|---|---:|
| Arduino | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| L293D Motor Driver | 1 |
| DC Geared Motors | 4 |
| 4-Wheel Robot Chassis | 1 |
| Wheels | 4 |
| Battery / Power Supply | 1 |
| Jumper Wires | As required |

## 💻 Technologies Used

- Arduino IDE
- Embedded C/C++
- Ultrasonic Sensor Interfacing
- DC Motor Control
- Basic Autonomous Navigation

## 🔄 System Flow

```text
HC-SR04 Ultrasonic Sensor
          │
          │ Distance
          ▼
       Arduino
          │
          │ Control Signals
          ▼
   L293D Motor Driver
       │         │
       ▼         ▼
  Left Motors  Right Motors
     (2)          (2)
```

## 📏 Distance Measurement

The HC-SR04 measures distance using the time taken by an ultrasonic pulse to travel to an obstacle and return.

`Distance (cm) = Echo Duration (µs) × 0.034 / 2`

## 📂 Repository Structure

```text
Obstacle-Avoiding-Robot/
├── README.md
├── src/
│   └── obstacle_avoiding_robot.ino
├── circuit/
│   └── circuit-diagram.png
└── images/
    └── robot.jpg
```

## 📸 Prototype
<img width="4032" height="3024" alt="WhatsApp Image 2026-10-01 at 3 52 04 PM" src="https://github.com/user-attachments/assets/3ef30a28-3909-4b72-93e0-577a105ee96c" />
<img width="4032" height="3024" alt="WhatsApp Image 2026-10-01 at 3 48 45 PM" src="https://github.com/user-attachments/assets/01119b43-a797-4511-a66d-875974e01f17" />


## 🚀 What I Learned

- Interfacing an ultrasonic sensor with Arduino
- Processing real-time distance measurements
- Controlling DC motors using a motor driver
- Implementing obstacle detection and avoidance logic
- Building and testing an embedded hardware prototype

## 👨‍💻 Author

**Naghul Pranav R B**  
Electronics and Communication Engineering  
Saveetha Engineering College
