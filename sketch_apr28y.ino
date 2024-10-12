#define TRIGpin 9
#define ECHOpin 8
// #define led 6
long duration;
int distance;
void setup(){
  pinMode(TRIGpin, OUTPUT);
  pinMode(ECHOpin, INPUT);
  Serial.begin(9600);
  Serial.println("test of the ultrasonic sensor HC-SR04");
  Serial.println("with the arduino UNOR3 board");
  // pinMode(led, OUTPUT);
 
}
void loop(){
  digitalWrite(TRIGpin , LOW);
  delay(1000);

  digitalWrite(TRIGpin , HIGH);
  delay(1000);
  
  digitalWrite(TRIGpin , LOW);

  duration = pulseIn(ECHOpin, HIGH);  

  distance = duration*(0.034/2);
  // SerialWrite(analogRead(A2));
  Serial.print("Distance:"); 
  Serial.print(distance);
  Serial.println("cm");
  // if( distance >10){
  // digitalWrite(led , HIGH);
  // }
  // else{
  //   digitalWrite(led, LOW);
  }
}
