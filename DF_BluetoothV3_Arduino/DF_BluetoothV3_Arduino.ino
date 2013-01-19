/*

 * DF-BluetoothV3 Bluetooth modulef rom DFRobot
 * https://github.com/fusion94/DF-BluetoothV3_Arduino
 
 Intefaces the DF-BluetoothV3 Bluetooth module with most Arduino contollers.
 
 When the DF-Bluetooth is used on Arduino, please make sure you disconnect the 
 DF-Bluetooth module before uploading any code to your Arduino. It won’t burn 
 your Arduino, but the uploading will fail as the DF-Bluetooth module occupying 
 the TX/RX pins.
 
 * Copyright 2011-2013, http://fusion94.org
 * Licensed under the Mozilla Public License Version 2.0
 */

void setup() {
  // Initialize serial communications: Set serial baud rate to 9600
  Serial.begin(9600);          
} 

void loop() {
  // Print out our Hello World string followed by a newline
  Serial.print("Hello World from the DF-BluetoothV3 Bluetooth module");        
  Serial.println();
  // 1 second delay
  delay(1000);                  
}
