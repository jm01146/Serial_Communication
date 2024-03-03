/*This is for the HC-06/05 Bluetooth Modual for Arduino
This is to send commands via Pyhton IDE to Arduino Serial to respond to commands
*/
#include <SoftwareSerial.h>
SoftwareSerial HC06(10, 11);

//COnnect your lights to the arduino pins you want
int LED_R = 4;
int LED_B = 5;
int LED_Y = 6;
int LED_G = 7;

void setup() {
  //Open in some baudrate
  HC06.begin(9600);
  pinMode(LED_R, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(LED_Y, OUTPUT);
  pinMode(LED_G, OUTPUT);
}

void loop() {
  //If device is connect start reading
  if(HC06.available() > 0){
    char receive = HC06.read();
    //Wait for command and respond if command equals to what ever you give
    if(receive == '1'){
      digitalWrite(4, HIGH);
      delay(2000);
      digitalWrite(4, LOW);
    }
    else if(receive == '2'){
      digitalWrite(5, HIGH);
      delay(2000);
      digitalWrite(5, LOW);
    }
    else if(receive == '3'){
      digitalWrite(6, HIGH);
      delay(2000);
      digitalWrite(6, LOW);
    }
    else if(receive == '4'){
      digitalWrite(7, HIGH);
      delay(2000);
      digitalWrite(7, LOW);
    }
  }

}
