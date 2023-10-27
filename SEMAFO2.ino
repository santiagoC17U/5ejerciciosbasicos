void setup(){
   Serial.begin(9600);
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
   int ValorADC;
  float voltaje;
  
  paro=digitalRead(11);
   mant=digitalRead(10);
   ValorADC= analogRead(A0);
  voltaje= ValorADC*(5.0/1.023)/25;
  Serial.println(voltaje);
  delay(2);
  if (paro==0){
    
   digitalWrite(7,HIGH);
   delay(5000 - voltaje);
   digitalWrite(7,LOW);
   
   
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   delay(1000- voltaje);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
  
   
   digitalWrite(5,HIGH);
   delay(3000-voltaje);
   digitalWrite(5,LOW);
   digitalWrite(6, HIGH);
  delay(1000-voltaje);
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
    delay(500-voltaje);
    digitalWrite(6,LOW);
    delay(500 - voltaje);
  }
  
}
