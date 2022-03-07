## Case Study 1- SUBSTATION PARAMETERS MONITORING SYSTEM
### Description
Monitoring the substation means collecting significant
parameters, analyzing the faults, diagnosing the conditions, provides proper 
decision making scheme along with reducing failures and breakdowns. The 
distribution transformers are the transformers which have been directly connected 
to the domestic or industrial purpose. Any faults occurring in this system may 
degrade the load connected to it. This can be achieved effectively using Internet of 
Things. The inputs are sensed properly and the processed outputs are continuously 
monitored using this technology

### Block Diagram
![](/CaseStudy/Complex_Embedded_System/Substation_Parameter_Monitoring_System.png)

### Components in the system
The proposed system consists of an Arduino Uno to control the entire 
system. 

The model also consists of a current sensor, voltage sensor and frequency 
detector to sense the signals of current, voltage and frequency of the ac input 
distributed from the distribution transformer which is of 23KV/415V, 230V. 

It also consists of the LCD display to monitor the electrical parameters connected to 
the controller.

The buzzer is also connected with Arduino Uno. Two relays are 
used which are directly connected with distribution line along with two loads. 

The ESP8266 module integrated with the mobile application is also connected to check 
the real time condition of electrical parameters using IoT.

## Requirements
## 2.1 High Level Requirements
ID     | Description
-------| -----------------------------------------
HLR 1  |The relay shall be operated when this system detects any abnormal change in the load side as well as input side and cut off the load from the supply.
HLR 2  |Alert shall be given to the lineman
HLR 3  |Protection for the load shall be given


## 2.2 Low Level Requirements
 ID     | Description
-------| -----------------------------------------
LLR 1  |Relay shall be used
LLR 2  |Buzzer shall be used to alert the lineman
LLR 3  |It enables automatic control using the controller and protecting the connected load by means of protective relays.

## Applications
1. By connecting wireless camera in industries, factories etc we can see the 
entire equipments from our personal computer only by using gprs and gps 
technology.

2. The monitoring and controlling of the devices can be done from the personal 
computer and we can use to handle so many situations. 

3. The devices and their parameters such as frequency, voltage, load impedance, reluctance, oil level, temperature, 
cooling condition and power can be monitored in an integrated display unit.
