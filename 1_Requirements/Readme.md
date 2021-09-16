# Requirements
## Introduction
 Effective thermal management of vehicles requires new and enhanced systems and methods aimed at reducing the generation and disolacement of heat within around a vehicle.The car heating allows car users to maintain a reasonable temperature sitting at home or other place.

## Research
 Heating mechanism can be accomplished either directly or indirectly, and can have significant impacts on a host of essential vehicle attributes, including fuel economy, safety, range, reliability, and overall comfort of the occupants. Most of these impacts impose secondary impacts; for example, improving a driver’s comfort also tends to improve safety by enhancing alertness, and better component thermal management leads to enhanced electronic reliability. In the case of military applications, thermal management is also an essential factor in detection avoidance on the battlefield. 
## Cost and Features and Timeline
Button Sensor will check the passenger is seated or not
Temperature sensor works as table.
Display CDD-CRO wil give the temperature value by showing PWM.
Led Actuator shows the driver is seated. 
 Heater will check the heater button is ON.
 Temp to CAN shows the value of temperature gone over protocol.

## Defining Our System
Once the driver is seated on the temperature will send a request and there on heater will be turned on.
   
## SWOT ANALYSIS
![SWOT](https://user-images.githubusercontent.com/89645779/133600861-5efaeee2-0901-4e27-828f-cd1649c57d66.jpg)


# 4W&#39;s and 1&#39;H

## Who:
Useful in driver safety and comfort.

## What:

To implement a heater system.When the driver is seated on then only temperature sensor send a request and then heater must be tuned on.

## When:

When the driver is seated on then only the heater must be turned on.

## Where:

At any place where the use of heater is required.

## How:

To implement it so to proviode safetu and comfort for the driver in colder or europian regions.

# Detail requirements
## High Level Requirements:
| ID | Description |   Status (Implemented/Future) |
| ------ | --------- |   ----- |
| HR01 |Button Sensor will check the passenger is seated or not .|  IMPLEMENTED |
| HR02 | Display CDD-CRO wil give the temperature value by showing PWM . |   IMPLEMENTED  |
| HR03 |Led Actuator shows the driver is seated. |   IMPLEMENTED  |


##  Low level Requirements:
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | Temperature sensor works as table.| HR01 | IMPLEMENTED |
| LR02 | Temp to CAN shows the value of temperature gone over protocol. | HR02 |  IMPLEMENTED  |
| LR03 |Heater will check the heater button is ON.| HR03 |  IMPLEMENTED  |
