
int xPin=A0;
int yPin=A1;

void setup(){
  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);

Serial.begin(9600);    
   
}


void loop() 
{
  int xval=analogRead(xPin);
  int yval=analogRead(yPin);
 Serial.print("xavalue is");
 Serial.print(xval);
 Serial.print("\n");
Serial.print("yvalue is");
Serial.print(yval);
delay(1000);
  if ((xval>305 && xval<345) && (yval>320 && yval<370)) //stop
  {
   Serial.print("stop");
       Serial.write("1");                                
  } 

  else if ((xval>280 && xval<330) && (yval>200 && yval<280)) //forward
   {
   Serial.print("forward");
      Serial.write("2");     
              
    }
   else if ((xval>320 && xval<370) && (yval>400 && yval<470)) //backward
  {
   Serial.print("back");
       Serial.write("3");     
    }   

   else  if ((xval>380 && xval<460) && (yval>310 && yval<360)) //left
    {
      Serial.print("left");
                 Serial.write("4");     
     }

else if ((xval>200 && xval<270) && (yval>310 && yval<370))//right
    {
       Serial.print("right");
       Serial.write("5");  
          
    }
 
  delay(10);
  

}
