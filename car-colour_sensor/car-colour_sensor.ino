#include <stdio.h>


int lmt1=3;
int lmt2=5;
int rmt1=6;
int rmt2=11;

void setup() {
  // put your setup code here, to run once:
pinMode(lmt1,OUTPUT);
pinMode(lmt2,OUTPUT);
pinMode(rmt1,OUTPUT);
pinMode(rmt2,OUTPUT);
}

void forward(){
  digitalWrite(lmt1,HIGH);
  digitalWrite(lmt2,LOW);
  digitalWrite(rmt1,LOW);
  digitalWrite(rmt2,HIGH);
  }
  
  void back(){
  digitalWrite(lmt1,LOW);
  digitalWrite(lmt2,HIGH);
  digitalWrite(rmt1,HIGH);
  digitalWrite(rmt2,LOW);
  }
  
  void right(){
  digitalWrite(lmt1,HIGH);
  digitalWrite(lmt2,LOW);
  digitalWrite(rmt1,LOW);
  digitalWrite(rmt2,HIGH);
  
  }
  void left(){
  digitalWrite(lmt1,LOW);
  digitalWrite(lmt2,HIGH);
  digitalWrite(rmt1,LOW);
  digitalWrite(rmt2,HIGH);
  }
  
void loop() {
  // put your main code here, to run repeatedly:

}
