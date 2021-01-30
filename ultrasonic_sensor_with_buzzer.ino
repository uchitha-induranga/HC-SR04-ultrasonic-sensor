//HRTE PROJECTS  ----  XD


#define trigpin 10
#define echopin 11

long duration;
int  distance;

void setup() {
 pinMode(trigpin,OUTPUT);
 pinMode(echopin,INPUT);
 pinMode(2,OUTPUT);//connect your buzzer to digitalpin nu:2
 Serial.begin(9600);
 
 }

void loop() {

 digitalWrite(trigpin,LOW);
 delayMicroseconds(2);

 digitalWrite(trigpin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigpin,LOW);
 
duration = pulseIn(echopin,HIGH);

 distance = duration*0.034/2 ;

 Serial.print("Distace:");
 Serial.print(distance);
 Serial.println("cm");
 delay(1000);
 if (distance == 25 )// or if (distance < 25 )
 {
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
 
 }


}
