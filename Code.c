int p1=2;
int p2=3;
int p3=4;
int p4=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(p1,OUTPUT);
   pinMode(p2,OUTPUT);
   pinMode(p3,OUTPUT);
   pinMode(p4,OUTPUT);
   Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  char control=Serial.read();
  if(control=='R'){ digitalWrite(p1,LOW);
    digitalWrite(p1,HIGH);
    digitalWrite(p2,LOW);
    digitalWrite(p3,HIGH);
    digitalWrite(p4,LOW);
    delay(1000);
    digitalWrite(p1,LOW);
    digitalWrite(p3,LOW);
    
 }
  
else if(control=='F'){
    digitalWrite(p1,LOW);
    digitalWrite(p2,HIGH);
    digitalWrite(p3,LOW);
    digitalWrite(p4,HIGH);
    delay(1000);
    digitalWrite(p2,LOW);
    digitalWrite(p4,LOW);
}
    else if(control=='D'){
    digitalWrite(p1,HIGH);
    digitalWrite(p2,LOW);
    digitalWrite(p3,LOW);
    digitalWrite(p4,HIGH);
    delay(1000);
    digitalWrite(p1,LOW);
    digitalWrite(p4,LOW);
}
else if(control=='L'){
    digitalWrite(p1,LOW);
    digitalWrite(p2,HIGH);
    digitalWrite(p3,HIGH);
    digitalWrite(p4,LOW);
    delay(1000);
    digitalWrite(p2,LOW);
    digitalWrite(p3,LOW);
}
}
