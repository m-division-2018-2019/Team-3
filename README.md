<h1>What exactly is this project all about?</h1>

Basically it is a device intended to facilitate navigational guidance to the visually impaired people.
The basic functionalities of the device are: * 270 degree Obstacle detection at a range of 3mts.
* Obstacle nature identification using Computer vision and machine learning algorithms.
*Joystick controlled navigation with DC motors of calibrated speed matching the walking speed of user.
*Obstacle notification using buzzer and vibrator giving various vibrating patterns as per Nature of Obstacle. 
*Provision for a 3mm Audio jack for audio notification about nature of Obstacle and for navigation assistance.

It is a device which guides visually impaired by moving ahead of the user and checking for any obstacles in the desired path in which the user wants to move.
Obstacles are identified using machine vision camera and ultrasonic sensors.
This sends data to the microprocessor. User will have a joystick in handle which can be used to 2 dimensional movement of the device. 
When the device encounters certain obstacles, it notifies the user the exact nature of the obstacle. 
Device has 6inch all terrain wheels whose circumference is same as size of a human foot length.Unlike smart canes , 
it not just be pointed at certain points which are discrete and range feet apart due to which obstacles cannot be detected most of the times, 
it physically moves on the path first, covering complete track on which user needs to walk. 
12volts rechargeable battery of 3000mah is used giving power backup upto 8hrs on an average, 
which is a fair trade-off for its lower weight. Overall weight of device is 1.5kg making it user friendly mobile device. 
MATLAB image processing tools and python OpenCV library is used in programming the machine vision for the device. 
The remaining sensor Data processed on Arduino. Overall fabrication cost device is around INR2500. 
Regarding safety measures, as soon as the device is turned on, a component check code runs, ensuring the functionality of all components. 
An instant lockdown switch is provided which immediately switches off the device and then restarts. The indigenously built water sensor detects water stagnation as well. 
It is installed with a Bluetooth module as well as a GPS module which is connected to the smartphone of 
the user which can send the user location to family when a GPS button is pressed on the device handle.
