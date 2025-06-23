# -TEMPERATURE-MONITORING-SYSTEM

COMPANY : CODTECH IT SOLUTIONS PVT.LTD

NAME : GURANA REVATHI

INTERN ID : CT06DL1398

DOMAIN : EMBEDDED SYSTEMS

DURATION : 6 WEEKS

MENTOR : NEELA SANTOSH

DESCRIPTION :  TEMPERATURE MONITORING SYSTEM

This project outlines the construction of a real-time temperature monitoring system using an Arduino UNO board, an LM35 temperature sensor, and an LCD display.
The system is designed to provide accurate temperature readings in both Celsius and Fahrenheit, making it versatile for various applications.

The core of the system revolves around the LM35 temperature sensor. This three-terminal integrated circuit is specifically designed for temperature measurement,
capable of sensing temperatures ranging from -55°C to 150°C. Its key feature is its linear analog voltage output, which is directly proportional to the ambient temperature.
The LM35 boasts a sensitivity of 10mV per degree Celsius, meaning that for every 1°C rise in temperature, its output voltage increases by 10mV.
For instance, a reading of 300mV directly translates to 30°C. This inherent linearity and the absence of a need for external calibration contribute to its high precision.
The sensor operates reliably within a wide supply voltage range of 4V to 30V.

The Arduino UNO R3 board serves as the brain of this temperature monitoring system.
It is responsible for reading the analog output from the LM35, performing the necessary calculations, and controlling the LCD display.
The required components for this project include an Arduino UNO R3 board, a 10kΩ variable resistor (potentiometer) for adjusting LCD brightness,
a 220Ω resistor,an 8-bit LCD, a mini breadboard, the LM35 temperature sensor itself, and various wires and a power supply cable.

The circuit connections are straightforward. The LM35 is powered directly by the Arduino's VCC and GND pins. 
Its analog output pin is connected to the Arduino's analog input pin A0, allowing the Arduino to read the varying voltage signal.
The LCD display requires several connections to the Arduino. 
The RS (Register Select) pin of the LCD is connected to Arduino's digital pin 12, and the E (Enable) pin to digital pin 11. 
The data pins of the LCD (D4, D5, D6, D7) are connected to Arduino's digital pins 5, 4, 3, and 2 respectively.
The R/W (Read/Write) pin of the LCD is connected to GND, indicating write-only operations.
Powering the LCD involves connecting its pin 2 to +VCC and pins 1 and 4 to GND.
The 10kΩ potentiometer plays a crucial role in controlling the LCD's contrast or brightness; its second pin is connected to pin 3 of the LCD,
while its first pin goes to +VCC and its third pin to GND (the first and third pins can be interchanged).

The Arduino code is responsible for the system's functionality.
It begins by including the <LiquidCrystal.h> library, which provides essential functions for interacting with the LCD. 
Variables are declared to store the raw sensor reading (temp), temperature in Celsius (tempc), and temperature in Fahrenheit (tempf). 
The LiquidCrystal object is initialized with the specified Arduino pins connected to the LCD.
In the setup() function, the LCD is initialized for a 16-character, 2-line display. 
The loop() function, which runs continuously, performs the core operations: it reads the analog value from the LM35 using analogRead(sensor), 
converts this raw reading into Celsius using the formula tempc = (temp * 5) / 10;, and then converts Celsius to Fahrenheit using tempf = (tempc * 1.8) + 32;. 
It's important to note a discrepancy in the provided code explanation regarding the Celsius conversion factor.
The code uses (temp * 5) / 10; which simplifies to temp / 2;,while the explanation mentions (temp * 4.88) / 10;. 
The correct conversion for LM35 with a 5V Arduino is typically (analogRead(A0) * (5.0 / 1024.0)) * 100; or a simplified equivalent, 
as the LM35 outputs 10mV per degree Celsius and the Arduino's ADC provides 1024 steps for 5V. The provided code's (temp * 5) / 10; might be an approximation or 
simplified for a specific scenario. Finally, the calculated Celsius and Fahrenheit temperatures are displayed on the LCD using lcd.setCursor(), lcd.print(), and
lcd.println() functions.

The working process of the system is a continuous loop: the LM35 senses the ambient temperature and generates a proportional analog voltage.
The Arduino's analog-to-digital converter (ADC) reads this voltage and converts it into a digital value.
The Arduino then applies the conversion formulas to derive the temperature in Celsius and Fahrenheit. 
These calculated temperature values are then transmitted to the LCD display, providing real-time temperature updates to the user.

In conclusion, this Arduino-based temperature monitoring system offers a practical and efficient solution for various temperature sensing needs.
Its applications are diverse, ranging from basic home temperature monitoring to more specialized uses in weather monitoring systems, agricultural fields,
and industrial environments where precise temperature data is crucial. This project serves as an excellent example of interfacing sensors with microcontrollers 
to create useful and informative real-world applications.
