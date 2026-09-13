# Smart Parking Barrier 

Project Description

A smart parking barrier is a type of automatic parking barrier which detects an incoming vehicle with the help of an HC-SR04 ultrasonic sensor and opens the barrier using an SG90 Servo motor. This system displays the status of the barrier using a red and a green LED.

The aim is to make a smart parking barrier for vehicles which can open and close automatically without human help.

Components Used
The following components were used for the development of this project:
1.Arduino Uno 
2.HC-SR04 Ultrasonic Sensor
3.SG90 Servo Motor
4.Red LED
5.Green LE
6.220Ω Resistors
7.Breadboard
8.Jumper Wires
9.USB Power Supply

Circuit Connections
# HC-SR04 Ultrasonic Sensor Connections
| VCC | 5V |
| GND | GND |
| TRIG | D2 |
| ECHO | D3 |

#SG90 Servo Motor Connections
| Signal | D9 |
| VCC | 5V |
| GND | GND |

#LED Connections
| Red LED | D6 with 220Ω resistor |
| Green LED | D7 with 220Ω resistor |

The cathode (negative) pin of the LED should be connected to GND.

How Does It Work?
The working mechanism of this smart parking barrier is really simple and can be explained in the few following steps:

1. The HC-SR04 Ultrasonic Sensor keeps on calculating the distance between the sensor and the incoming car.
2. As soon as a vehicle arrives at the calculated range, Arduino detects a signal from the sensor.
3. At this point, the SG90 Servo motor rotates and opens the parking barrier.
4. The Green LED glows to show that the parking barrier is open.
5. Now, when the vehicle leaves the counted range, the parking barrier gets closed again.
6. The Red LED turns ON to show that the parking barrier is closed.

So, whenever there is a vehicle near the parking barrier, the Green LED gets ON. Whereas, when a vehicle moves away from the parking barrier, the Red LED gets ON.

## Technologies Used

- Arduino
- C/C++ (Embedded)
- Ultrasonic Sensor
- Servo Motor

future enhancement...

With the help of this instructable, one can develop a smart parking barrier for vehicles using an ultrasonic sensor and a servo motor. You can enhance the skills by modifying this project and can add multiple features like RFID based vehicle recognition, multiple parking slots, OLED/LCD Display etc.
