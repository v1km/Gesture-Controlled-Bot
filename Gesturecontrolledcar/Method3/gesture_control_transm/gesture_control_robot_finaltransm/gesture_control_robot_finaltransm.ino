#include <VirtualWire.h>
char *controller;
int xPin=A0;
int yPin=A1;
//pin12 of mod
void setup(){
  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);
vw_set_ptt_inverted(true); //
vw_set_tx_pin(12);
vw_setup(4000);// speed of data transfer Kbps
}


void loop() 
{
  int xval=analogRead(xPin);
  int yval=analogRead(yPin);
 Serial.print("X = "); // print x adc value
  Serial.println(xval);
  Serial.print("Y = "); // print y adc value
  Serial.println(yval);
delay(100);
  if ((xval>305 && xval<345) && (yval>320 && yval<370)) //stop
  {
                                     controller="1" ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx(); // Wait until the whole message is gone
delay(100);
Serial.print("stop");
  } 

  else if ((xval>280 && xval<330) && (yval>200 && yval<280)) //forward
   {
     
                                     controller="2" ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx(); // Wait until the whole message is gone
delay(100);
              Serial.print("front");    
    }
  else  if ((xval>320 && xval<370) && (yval>400 && yval<470)) //backward
  {
   
                                  
                                     controller="3" ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx(); // Wait until the whole message is gone
delay(100);
Serial.print("back");
              
    }   

    if ((xval>380 && xval<460) && (yval>310 && yval<360)) //left
    {
           
                                     controller="4" ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx(); // Wait until the whole message is gone
delay(100);  
   Serial.print("left"):
     }

if ((xval>200) && xval<270) && (yval>310 && yval<370)) //right
    {
         

                                     controller="5" ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx(); // Wait until the whole message is gone
delay(100);
    Serial.print("right");
    }
 
  }
  

}
