#define EN1 9
#define EN2 10
#define I1 2
#define I2 3
#define I3 4
#define I4 5
int pump = 11;
char x;
void setup() 
{
 pinMode(I1,OUTPUT);
 pinMode(I2,OUTPUT);
 pinMode(I3,OUTPUT);
 pinMode(I4,OUTPUT);
 pinMode(11,OUTPUT);
 
 
 Serial.begin(9600);
}


void loop() 
{
  if(Serial.available())
  {
    x=Serial.read();
    Serial.println(x);
  }

if(x=='1')
{
analogWrite(EN1,190);
analogWrite(EN2,190);
digitalWrite(I1,HIGH);
digitalWrite(I2,LOW);
digitalWrite(I3,HIGH);
digitalWrite(I4,LOW);
}
if(x=='2')
{
digitalWrite(I1,LOW);
digitalWrite(I2,LOW);
digitalWrite(I3,LOW);
digitalWrite(I4,LOW);
}
if(x=='3')
{
analogWrite(EN1,190);
analogWrite(EN2,190);
digitalWrite(I1,LOW);
digitalWrite(I2,HIGH);
digitalWrite(I3,LOW);
digitalWrite(I4,HIGH);
}
if(x=='4')
{
analogWrite(EN1,200);
analogWrite(EN2,100);
digitalWrite(I1,HIGH);
digitalWrite(I2,LOW);
digitalWrite(I3,LOW);
digitalWrite(I4,LOW);
}
if(x=='5')
{
analogWrite(EN1,100);
analogWrite(EN2,200);
digitalWrite(I1,LOW);
digitalWrite(I2,LOW);
digitalWrite(I3,HIGH);
digitalWrite(I4,LOW);
}
if (x=='6')
{
  digitalWrite(pump,HIGH);
}
if (x=='7')
{
  digitalWrite(pump,LOW);
}
}
