# SCADA-UPGRADATION
#  SCADA Integrated Motor Diagnostic System

##  Project Overview
The **SCADA Integrated Motor Diagnostic System** is a real-time motor condition monitoring project developed to upgrade conventional SCADA systems.  
It integrates multiple sensors with a microcontroller and SCADA software to monitor motor health, detect faults early, and improve system reliability.

---

##  Objectives
- Monitor motor health parameters in real time  
- Integrate sensor data with SCADA  
- Generate alarms for abnormal conditions  
- Reduce motor failure and maintenance cost  

---

##  Technology Used
- **SCADA Technology** – Real-time monitoring, visualization, and alarm handling  
- **Embedded Systems** – Sensor interfacing and data acquisition  
- **Industrial Automation** – Motor condition monitoring  
- **Serial / Modbus Communication** – Data transfer between controller and SCADA  
- **Database Technology (SQL)** – Data logging and historical analysis  

---

##  Functions and Role of System
- Collect real-time data from motor and environment  
- Process sensor data using microcontroller  
- Transmit processed data to SCADA system  
- Display parameters on SCADA dashboard  
- Trigger alarms when values exceed threshold limits  
- Store data for future analysis and diagnostics  

---

##  Hardware Components and Description

### 1. Induction Motor
- Acts as the load under monitoring  
- Key parameters such as current and temperature are observed  

### 2. Current Sensor (ACS712 / CT Sensor)
- Measures motor current consumption  
- Helps in detecting overload and abnormal motor behavior  

### 3. Temperature Sensor (LM35 / DS18B20)
- Measures motor surface temperature  
- Prevents overheating and insulation damage  

### 4. Humidity Sensor (DHT11 / DHT22)
- Measures surrounding humidity and temperature  
- Useful for environmental condition monitoring  

### 5. Microcontroller (Arduino / ESP32)
- Collects data from sensors  
- Converts analog data to digital  
- Sends data to SCADA system  

### 6. Power Supply Unit
- Supplies required voltage to sensors and controller  

---

##  Software Components and Description

### 1. SCADA Software (ScadaBR / WinCC / Ignition)
- Displays real-time parameters  
- Generates alarms  
- Logs historical data  

### 2. Arduino IDE
- Used for writing and uploading controller code  

### 3. Node-RED (Optional)
- Data processing and protocol conversion  

### 4. SQL Database
- Stores sensor data for trend analysis  

---

##  Pin Configuration (Example: Arduino UNO)

| Component           | Arduino Pin | Description                     |
|--------------------|-------------|---------------------------------|
| Current Sensor     | A0          | Analog current input            |
| Temperature Sensor | A1          | Analog temperature input        |
| Humidity Sensor    | D2          | Digital data pin                |
| Motor Relay        | D8          | Motor ON/OFF control            |
| Serial TX          | D1          | Data transmission to SCADA      |
| Serial RX          | D0          | Data reception from SCADA       |

>  Pin configuration may vary based on controller and sensors used.

---

##  Working Principle
1. Sensors continuously monitor motor and environmental parameters  
2. Microcontroller reads sensor data  
3. Data is transmitted to SCADA system  
4. SCADA displays real-time values  
5. Alarm triggers if threshold limits are exceeded  
6. Data is logged into database  

---

##  SCADA Dashboard Features
- Live motor current and temperature display  
- Alarm and fault indication  
- Historical trend graphs  
- User-friendly interface  

---

##  Applications
- Industrial motor condition monitoring  
- Predictive maintenance  
- Automation industries  
- Power plants  
- Manufacturing units  

---

##  Future Scope
- AI-based fault detection  
- Cloud SCADA integration  
- Mobile monitoring application  
- Vibration and power quality analysis  

---

##  Team Members
- Malvika Shukla  
- Muskan Sinha  
- Rajashree Pal  




