const int trigPin1 = 33;
const int echoPin1 = 32;
const int trigPin2 = 25;
const int echoPin2 = 26;
const int trigPin3 = 38;
const int echoPin3 = 39;
const int trigPin4 =40 ;
const int echoPin4 = 41;
int JoyStick_X = A0; // x
int JoyStick_Y = A1; // y

long int duration1 ,distance1,duration2 ,distance2,duration3 ,distance3,duration4,distance4;
int x, y;


void setup()
{
  Serial.begin(9600);
  pinMode(trigPin1,OUTPUT);
  pinMode(echoPin1,INPUT);
  pinMode(trigPin2,OUTPUT);
  pinMode(echoPin2,INPUT);
  pinMode(trigPin3,OUTPUT);
  pinMode(echoPin3,INPUT);
  pinMode(trigPin4,OUTPUT);
  pinMode(echoPin4,INPUT);
 
  pinMode(16,OUTPUT);
  pinMode(17,OUTPUT);
 
  pinMode(JoyStick_X,INPUT);
  pinMode(JoyStick_Y,INPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(14,OUTPUT);
pinMode(15,INPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);

}

void loop() 
{
  int y = analogRead (JoyStick_X);
 int  x= analogRead (JoyStick_Y);

  digitalWrite(trigPin1,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1,HIGH);
  delayMicroseconds(4);
   digitalWrite(trigPin1,LOW);
   duration1 = pulseIn(echoPin1,HIGH);
   distance1 = (duration1*0.034/2);
   Serial.print(distance1);
    Serial.print('\t');

   digitalWrite(trigPin2,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2,HIGH);
  delayMicroseconds(4);
   digitalWrite(trigPin2,LOW);
   duration2 = pulseIn(echoPin2,HIGH);
   distance2 = (duration2*0.034/2);
   Serial.print(distance2);
    Serial.print('\t');

   digitalWrite(trigPin3,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin3,HIGH);
  delayMicroseconds(4);
   digitalWrite(trigPin3,LOW);
   duration3 = pulseIn(echoPin3,HIGH);
   distance3 = (duration3*0.034/2);
   Serial.print(distance3);
    Serial.print('\t');

 digitalWrite(trigPin4,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin4,HIGH);
  delayMicroseconds(4);
   digitalWrite(trigPin4,LOW);
   duration4 = pulseIn(echoPin4,HIGH);
   distance4 = (duration4*0.034/2);
   Serial.print(distance4);
    Serial.print('\t');
     
    
   Serial.print (x, DEC);
  Serial.print ('\t');
  Serial.print (y, DEC);
Serial.print ('\n');

    if(x>800)
            {
                  digitalWrite(2,LOW);
                  digitalWrite(3,LOW);
                    digitalWrite(4,LOW);
                digitalWrite(5,HIGH);
                if(distance2<15)
                {
                digitalWrite(17,HIGH);
                delay(1000);
                digitalWrite(17,LOW);
                digitalWrite(16,HIGH);
                delay(1000);
                digitalWrite(16,LOW);
                digitalWrite(2,LOW);
                digitalWrite(3,LOW);
                digitalWrite(4,LOW);
                digitalWrite(5,LOW);
                digitalWrite(7,LOW);
                digitalWrite(8,LOW);
                digitalWrite(9,LOW);
                digitalWrite(10,LOW);
                  }                
            }
   
   if(x<200)
  {
  
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
      digitalWrite(5,LOW);
    digitalWrite(4,LOW);
     if(distance3<15)
                {
                   digitalWrite(17,HIGH);
                delay(1000);
                digitalWrite(17,LOW);
                digitalWrite(16,HIGH);
                 delay(1000);
                digitalWrite(16,LOW);
                 digitalWrite(2,LOW);
                digitalWrite(3,LOW);
                digitalWrite(4,LOW);
                digitalWrite(5,LOW); 
                digitalWrite(7,LOW);
                digitalWrite(8,LOW);
                digitalWrite(9,LOW);
                digitalWrite(10,LOW);
                
    }
  }
  
   else if(x>200 && x<800)
  {
                digitalWrite(2,LOW);
                digitalWrite(3,LOW);
                digitalWrite(4,LOW);
                digitalWrite(5,LOW);
    }
  
  if(y>800)
  {  
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(17,LOW);
        if(distance1<25)
           {
             digitalWrite(16,HIGH);
                delay(1000);
                digitalWrite(16,LOW);
                 digitalWrite(7,LOW);
                  digitalWrite(8,LOW);
                  digitalWrite(9,LOW);
                  digitalWrite(10,LOW);
                digitalWrite(2,LOW);
                digitalWrite(3,LOW);
                digitalWrite(4,LOW);
                digitalWrite(5,LOW);
              
                 
            }
           else if(distance1<5)
             {
                digitalWrite(17,HIGH);
                delay(1000);
                digitalWrite(17,LOW);
                digitalWrite(7,LOW);
                digitalWrite(8,LOW);
                digitalWrite(9,LOW);
                digitalWrite(10,LOW);
                digitalWrite(2,LOW);
                digitalWrite(3,LOW);
                digitalWrite(4,LOW);
                digitalWrite(5,LOW);
    }
  
  }

    
  if(y<200)
  { digitalWrite(8,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
  digitalWrite(17,LOW);
  if(distance1<25         )
           {
                digitalWrite(7,LOW);
                digitalWrite(8,LOW);
                digitalWrite(9,LOW);
                digitalWrite(10,LOW);
                digitalWrite(2,LOW);
                digitalWrite(3,LOW);
                digitalWrite(4,LOW);
                digitalWrite(5,LOW);
                
                Serial.print ("SUJAY");
                digitalWrite(16,HIGH);
                delay(1000);
                digitalWrite(16,LOW);
                digitalWrite(17,HIGH);
                delay(1000);
                digitalWrite(17,LOW);
            }
          else if(distance1<5)
             {
                digitalWrite(17,HIGH);
                delay(1000);
                digitalWrite(17,LOW);
                digitalWrite(16,HIGH);
                delay(1000);
                digitalWrite(16,LOW);
                digitalWrite(7,LOW);
                digitalWrite(8,LOW);
                digitalWrite(9,LOW);
                digitalWrite(10,LOW);
                digitalWrite(2,LOW);
                digitalWrite(3,LOW);
                digitalWrite(4,LOW);
                digitalWrite(5,LOW);
                }
    
  }
  else if(y>200 && y<800)
  {
                digitalWrite(7,LOW);
                digitalWrite(8,LOW);
                digitalWrite(9,LOW);
                digitalWrite(10,LOW);
                  
                digitalWrite(2,LOW);
                digitalWrite(3,LOW);
                digitalWrite(4,LOW);
                digitalWrite(5,LOW);
    }
     if(distance4<7||distance4>17)
    {
     
               digitalWrite(17,HIGH);
               digitalWrite(16,HIGH);
               delay(500);
               digitalWrite(17,LOW);
                digitalWrite(16,LOW);
               delay(100);
               digitalWrite(17,HIGH);
               digitalWrite(16,HIGH);
               delay(500);
               digitalWrite(17,LOW);
               digitalWrite(16,LOW);
                digitalWrite(7,LOW);
                digitalWrite(8,LOW);
                digitalWrite(9,LOW);
                digitalWrite(10,LOW);
                  
                digitalWrite(2,LOW);
                digitalWrite(3,LOW);
                digitalWrite(4,LOW);
                digitalWrite(5,LOW);
           
               
                  
                 
                
    }
}
