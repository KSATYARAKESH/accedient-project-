//////////////////////////

#include <Servo.h>.
int G1 = 4;
int R1 = 5;
int G2 = 6;
int R2 = 7;

Servo myservo1; //right hand 1
Servo myservo2;

int pos = 0;


void setup() {
// put your setup code here, to run once:
pinMode(G1,OUTPUT);
pinMode(R1,OUTPUT);
pinMode(R2,OUTPUT);
pinMode(G2,OUTPUT);

myservo1.attach(2);
myservo2.attach(3);
}

void loop() {
// put your main code here, to run repeatedly:
digitalWrite(G1,HIGH);
digitalWrite(R2,HIGH);
delay(3800);   

for (pos = 0; pos <= 90; pos +=1){
myservo2.write(pos);
delay(19);
}

digitalWrite(G1,LOW);
digitalWrite(R2,LOW);
delay(2100); 

for (pos = 180; pos >= 0; pos -=1){
myservo1.write(pos);
delay(19);
}

digitalWrite(R1,HIGH);
digitalWrite(G2,HIGH);
delay(3800); 

for (pos = 180; pos >= 0; pos -=1){
myservo2.write(pos);
delay(19);
}

digitalWrite(R1,LOW);
digitalWrite(G2,LOW);
delay(2100); 

for (pos = 0; pos <= 90; pos +=1){
myservo1.write(pos);
delay(19);
} 


}
