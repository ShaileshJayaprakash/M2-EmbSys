
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
 
## 3. Applications 
1.It can be used in cars to automatically control the wiper action when needed.  
2.Using in cars thereby ease the work of driver and also contributes in comfortable driving by enabling the wiper action without manual intervention.

## 4.Block Diagram and Component details

![](/Project/6_ImagesAndVideos/Block%20Dig.1.png)
![](/Project/6_ImagesAndVideos/Block%20Dig.2.png)

## 5.Architecture
   ### 5.1 Behavioural Diagram
   
   ### 5.1.1 High Level Flow chart Behavioural Diagram
   ![](/Project/6_ImagesAndVideos/Behavioural%20%20HLD.png)
   
   ### 5.1.2 Low Level Flow chart Behavioural Diagram
   ![](/Project/6_ImagesAndVideos/Behavioural%20LLD.png)
   
   ### 5.2 Structural Diagram
   ### 5.2.1 High Level UML Use Case Structural Diagram
   ![](/Project/6_ImagesAndVideos/Structural%20HLD.png)
   
   ### 5.2.2 Low Level UML Use Case Structural Diagram
   ![](/Project/6_ImagesAndVideos/Structural%20LLD.png)
   
 ## 6.Badges
 ## Badge of Codiga

### Grade
![codiga score](https://api.codiga.io/project/31706/score/svg)
![codiga grade](https://api.codiga.io/project/31706/status/svg)

## Badge of codacy
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/e976d4429225417b8d89ace9273b647b)](https://www.codacy.com/gh/ShaileshJayaprakash/M2-EmbSys/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=ShaileshJayaprakash/M2-EmbSys&amp;utm_campaign=Badge_Grade)

## 7.Output
## Schematic Diagram
![](/Project/6_ImagesAndVideos/Schematic%20Diagram.png)

## Output when Rain is not detected 
![](/Project/6_ImagesAndVideos/Output%20when%20rain%20is%20not%20detected.png)

## Output when Rain is detected
![](/Project/6_ImagesAndVideos/Output%20when%20rain%20is%20detected.png)
