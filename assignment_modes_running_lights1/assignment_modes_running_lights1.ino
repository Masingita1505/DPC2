//Name:Hlongwani AM
//Student no: 219462697
//Description: Modes Running Lights

//Button declaration
int push_button1=7;
int push_button2=6;
int push_button3=5;
int push_button4=4;
//Leds declaration
int led1=13;
int led2=12;
int led3=10;
int led4=9;

void setup()
{
    pinMode(push_button1,INPUT);
    pinMode(push_button2,INPUT);
    pinMode(push_button3,INPUT);
    pinMode(push_button4,INPUT);

    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
    pinMode(led3,OUTPUT);
    pinMode(led4,OUTPUT);
}

void loop()
{
   ALL_lEDS_OFF();//Makes All Leds of Initially
  if(digitalRead(push_button1)==HIGH)
  {
     mode1();
  }
  if(digitalRead(push_button2)==HIGH)
  {
     mode2();
  } 
  if(digitalRead(push_button3)==HIGH)
  {
     mode3();
  }
  if(digitalRead(push_button4)==HIGH)
  {
    mode4();
  } 
}
void ALL_lEDS_OFF()
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
}
void ALL_lEDS_ON()
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);  
}
void mode1()
{
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led4,HIGH);
  delay(1000);
  ALL_lEDS_OFF();
  delay(1000);
}
void mode2()
{
  //LAST Two leds blinks
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(1000);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(1000);
   
  //First Two leds blinks
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  delay(1000);
      
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(1000);
  ALL_lEDS_OFF();
  delay(1000);
  
}
void mode3()
{
  digitalWrite(led1,HIGH);
  delay(1000); 
  digitalWrite(led2,HIGH);
  delay(1000); 
  digitalWrite(led3,HIGH);
  delay(1000); 
  digitalWrite(led4,HIGH);
  delay(1000);
  
  ALL_lEDS_OFF();
  delay(1000);
  ALL_lEDS_ON();
  delay(1000);

  digitalWrite(led4,LOW);
  delay(1000);
  digitalWrite(led3,LOW);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(1000);    
}
void mode4()
{
 mode4_1();
 mode4_2();
 mode4_3();
 mode4_4();
}
void mode4_1()
{
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led4,HIGH);
  delay(1000);

  digitalWrite(led1,LOW);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);
  digitalWrite(led3,LOW);
  delay(1000);
  digitalWrite(led4,LOW);
  delay(1000);
  
  digitalWrite(led4,HIGH);
  delay(1000);
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led1,HIGH);
  delay(1000);

  digitalWrite(led4,LOW);
  delay(1000);
  digitalWrite(led3,LOW);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(1000);  
}
void mode4_2()
{
  /*digitalWrite(led1,HIGH);
  delay(1000);*/
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led4,HIGH);
  delay(1000);

  /*digitalWrite(led1,LOW);
  delay(1000);*/
  digitalWrite(led2,LOW);
  delay(1000);
  digitalWrite(led3,LOW);
  delay(1000);
  digitalWrite(led4,LOW);
  delay(1000);
  
  digitalWrite(led4,HIGH);
  delay(1000);
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(1000);
  /*digitalWrite(led1,HIGH);
  delay(1000);*/

  digitalWrite(led4,LOW);
  delay(1000);
  digitalWrite(led3,LOW);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);
  /*digitalWrite(led1,LOW);
  delay(1000);*/  
}
void mode4_3()
{
  /*digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(1000);*/
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led4,HIGH);
  delay(1000);

  /*digitalWrite(led1,LOW);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);*/
  digitalWrite(led3,LOW);
  delay(1000);
  digitalWrite(led4,LOW);
  delay(1000);
  
  digitalWrite(led4,HIGH);
  delay(1000);
  digitalWrite(led3,HIGH);
  delay(1000);
  /*digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led1,HIGH);
  delay(1000);*/

  digitalWrite(led4,LOW);
  delay(1000);
  digitalWrite(led3,LOW);
  delay(1000);
  /*digitalWrite(led2,LOW);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(1000);*/  
}
void mode4_4()
{
  /*digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led3,HIGH);
  delay(1000);*/
  digitalWrite(led4,HIGH);
  delay(1000);

  /*digitalWrite(led1,LOW);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);
  digitalWrite(led3,LOW);
  delay(1000);*/
  digitalWrite(led4,LOW);
  delay(1000);
  
  digitalWrite(led4,HIGH);
  delay(1000);
  /*digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led1,HIGH);
  delay(1000);*/

  digitalWrite(led4,LOW);
  delay(1000);
  /*digitalWrite(led3,LOW);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(1000);*/  
}
