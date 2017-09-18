char data = 0 ;                
   void forward()
     {
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      }
      void backward()
      {
        digitalWrite(8,LOW);
        digitalWrite(9,HIGH);
        digitalWrite(10,LOW);
        digitalWrite(11,HIGH);
        }
      void left()
      {
        digitalWrite(8,HIGH);
        digitalWrite(9,LOW);
       delay(100);
        digitalWrite(10,LOW);
        digitalWrite(11,HIGH);
        }
      void right()
      {
        digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      delay(100);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
        }
      void stopcar()
      {
          digitalWrite(8,HIGH);
          digitalWrite(9,HIGH);
          digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
      }

int out1=8;   
int out2=9;    
int out3=10;    
int out4=11;    

void setup(){
  

  pinMode(out1,OUTPUT);
  pinMode(out2,OUTPUT);
  pinMode(out3,OUTPUT);
  pinMode(out4,OUTPUT);

 Serial.begin(9600);  // Debugging only
}


void loop() 
{
  if(Serial.available() > 0)
  { 
    data = Serial.read();
 
if (data == "1")
{
 Serial.print("stopped");
  stopcar();
  }
else if (data == "2")
{
 Serial.print("forward");
 forward();
  }
else if (data == "3")
{
  Serial.print("back");
  backward();
  }
else if (data == "4")
{
   Serial.print("left");
  left();
}
  
else if (data == "5")
{
   Serial.print("right");
  right();
  }
}
else{
  return;
  }
}
 
 
