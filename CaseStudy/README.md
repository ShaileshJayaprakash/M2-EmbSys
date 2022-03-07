## About the Automatic Car Wiper

## 1.1	Description  
The car wipers that have been available in the present day market are manual systems that work on the principle of manual switching.Our proposed system proposes an automatic wiper system that automatically switches ON the wiper on detection of rain and stops the wiper action when rain stops.
This system eases the work of driver by eliminating the manual human intervention for initiating the wiper action, thereby contributing to the comfort driving.
Here, the rain sensor is used along with microcontroller (Arduino UNO) and driver IC to drive the wiper motor. The rain sensor detects rain and then the signal is then processed by microcontroller to take the desired wiper action.

## Principle of sensor
The rain sensor works on the principle of using water for completing its circuit, so when rain falls on it it’s circuit gets completed and sends out a signal to the microcontroller. 
The microcontroller now processes this data and drives the motor IC to perform the required wiper action. The motor driver IC now drives a servomotor to simulate as a car wiper.

## 1.2	Identifying features

•	Rain is identified with the help of the rain sensor.  
•	Automatic wiper action is initiated without manual intervention.  
•	Microcontroller programmed system to ensure the automatic instant wiper action.  
•	When it stops raining, the wiper action automatically gets terminated.  

## 1.3	State of art

The main objective of this system is to initiate the wiper action when it rains and to terminate the same when the rain gets stopped. To ease the work of driver by eliminating the manual intervention thereby contributing to comfortable driving.

## 1.4	5W’s and 1 H

![](/Project/6_ImagesAndVideos/5w1h.png)

 
## 1.5 SWOT Analysis
 
![](/Project/6_ImagesAndVideos/swot.png)

## 2.Requirements
## 2.1 High Level Requirements
ID     | Description
-------| -----------------------------------------
HLR 1  |System shall automatically turn the wiper on when it starts raining
HLR 2  |System shall detect rain


## 2.2 Low Level Requirements
 ID     | Description
-------| -----------------------------------------
LLR 1.1  |Rain sensor shall detect the rain
LLR 1.2  |This signal shall be processed by microcontroller to turn on the wiper
LLR 2.1  |Rain shall be detected by using rain sensor  
LLR 2.2  |Rain sensor shall work on the principle of using water for completing its circuit

## 1.Block Diagram and Component details

![](/Project/6_ImagesAndVideos/Block%20Dig.1.png)
![](/Project/6_ImagesAndVideos/Block%20Dig.2.png)

## 2.Architecture
   ### 2.1 Behavioural Diagram
   
   ### 2.1.1 High Level Flow chart Behavioural Diagram
   ![](/Project/6_ImagesAndVideos/Behavioural%20%20HLD.png)
   
   ### 2.1.2 Low Level Flow chart Behavioural Diagram
   ![](/Project/6_ImagesAndVideos/Behavioural%20LLD.png)
   
   ### 2.2 Structural Diagram
   ### 2.2.1 High Level UML Use Case Structural Diagram
   ![](/Project/6_ImagesAndVideos/Structural%20HLD.png)
   
   ### 2.2.2 Low Level UML Use Case Structural Diagram
   ![](/Project/6_ImagesAndVideos/Structural%20LLD.png)
   
   ## Case Study of Substation Parameters Monitoring System
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
