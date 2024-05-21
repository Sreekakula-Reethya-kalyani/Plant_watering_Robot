#define EN1 9
#define EN2 10
#define I1 2
#define I2 3
#define I3 4
#define I4 5
#define LS A0
#define RS A1

void setup() 
{
 pinMode(I1,OUTPUT);
 pinMode(I2,OUTPUT);
 pinMode(I3,OUTPUT);
 pinMode(I4,OUTPUT);
 pinMode(A0,INPUT);
 pinMode(A1,INPUT);
 }


void loop() 
{
 if((digitalRead(LS)==0) && (digitalRead(RS)==0))

{
analogWrite(EN1,120);
analogWrite(EN2,120);
digitalWrite(I1,HIGH);
digitalWrite(I2,LOW);
digitalWrite(I3,HIGH);
digitalWrite(I4,LOW);
delay(1000);

}
if((digitalRead(LS)==1) && (digitalRead(RS)==1))
{
analogWrite(EN1,80);
analogWrite(EN2,80);  
digitalWrite(I1,LOW);
digitalWrite(I2,HIGH);
digitalWrite(I3,LOW);
digitalWrite(I4,HIGH);



}
if((digitalRead(RS)==1) && (digitalRead(RS)==0))
{
analogWrite(EN1,160);
analogWrite(EN2,80);
digitalWrite(I1,HIGH);
digitalWrite(I2,LOW);
digitalWrite(I3,LOW);
digitalWrite(I4,LOW);
delay(4000);
}
if((digitalRead(LS)==1) && (digitalRead(RS)==0))
{
analogWrite(EN1,80);
analogWrite(EN2,160);
digitalWrite(I1,LOW);
digitalWrite(I2,LOW);
digitalWrite(I3,HIGH);
digitalWrite(I4,LOW);
delay(4000);
}
}
