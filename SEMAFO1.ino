void setup(){
  
   pinMode(7,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (5,OUTPUT);
   pinMode(11,INPUT);
   pinMode(10, INPUT);
   pinMode(9, INPUT);
  pinMode(8,INPUT);
  
}
void loop(){
   
  bool paro; 
  bool mant;
   
  paro=digitalRead(11);
   mant=digitalRead(10);
  if (paro==0){
    
   digitalWrite(7,HIGH);
   delay(5000);
   digitalWrite(7,LOW);
   
   
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   delay(1000);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
  
   
   digitalWrite(5,HIGH);
   delay(3000);
   digitalWrite(5,LOW);
   digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  }
  else{
   digitalWrite(6,LOW);
   digitalWrite(5,LOW);
   digitalWrite(7,LOW);
  }
  if(mant==1&&paro==1)
  {
    
    digitalWrite(6,HIGH);
    delay(500);
    digitalWrite(6,LOW);
    delay(500);
  }
}
  

  
      