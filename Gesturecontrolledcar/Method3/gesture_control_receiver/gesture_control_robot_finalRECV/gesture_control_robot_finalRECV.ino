#include <VirtualWire.h>

 void forward()
     {
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(12,LOW);
      }
      void backward()
      {
        digitalWrite(8,LOW);
        digitalWrite(9,HIGH);
        digitalWrite(10,LOW);
        digitalWrite(12,HIGH);
        }
      void left()
      {
        digitalWrite(8,HIGH);
        digitalWrite(9,LOW);
       delay(100);
        digitalWrite(10,LOW);
        digitalWrite(12,HIGH);
        }
      void right()
      {
        digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      delay(100);
      digitalWrite(10,HIGH);
      digitalWrite(12,LOW);
        }
      void stopcar()
      {
          digitalWrite(8,HIGH);
          digitalWrite(9,HIGH);
          digitalWrite(10,HIGH);
      digitalWrite(12,HIGH);
      }


int out1=8;   
int out2=9;    
int out3=10;    
int out4=11;    
//pin12 of  mod
void setup(){
  
vw_set_ptt_inverted(true); // Required for DR3100
vw_set_rx_pin(12);
vw_setup(4000); // Bits per sec
vw_rx_start(); // Start the receiver PLL running
  pinMode(out1,OUTPUT);
  pinMode(out2,OUTPUT);
  pinMode(out3,OUTPUT);
  pinMode(out4,OUTPUT);
}
void loop()
{
  
  uint8_t buf[VW_MAX_MESSAGE_LEN];
uint8_t buflen = VW_MAX_MESSAGE_LEN;
if (vw_get_message(buf, &buflen))
{
  if(buf[0]=='1')
  {
stopcar();} 
else if(buf[0]=='2')
  {
forward();
} 
else if(buf[0]=='3')
  {
backward();
} 
else if(buf[0]=='4')
  {
left();
} 
else if(buf[0]=='5')
  {
right();
} 
  }
  
  }

