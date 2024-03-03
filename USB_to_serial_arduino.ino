//Pins for what you want to control
const int IN1 = 8;
const int IN2 = 7;
const int IN3 = 6;
const int IN4 = 5;

void setup() {
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // Your main code here
  if (Serial.available() > 0){
    String msg = Serial.readString();

    if (msg == "H"){
      digitalWrite(IN1, HIGH);
      delay(1000)
      digitalWrite(IN1, LOW);
    }

    else if (msg == "blue"){
      digitalWrite(IN2, HIGH);
      delay(1000)
      digitalWrite(IN2, LOW);
    }
//Add more commands if you want
// You can send strings or char if you want
    else{
      Serial.write("ERROR");
    }
  }
}
