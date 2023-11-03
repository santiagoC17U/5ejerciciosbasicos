       
void setup (){

pinMode (D8,OUTPUT);
pinMode (D7,OUTPUT);
pinMode (D4,OUTPUT);



Serial.begin(9600);
}
void loop(){

 float ValorADC=0;
float voltaje;
 ValorADC= analogRead(A0);
  voltaje= ValorADC;

  Serial.print("Voltaje= ");
  Serial.println(voltaje);
  delay(500);




if (voltaje>=1024){
  digitalWrite(D8,HIGH);
  digitalWrite(D7,LOW);
  digitalWrite(D4,HIGH);
}

if(voltaje>=530&&voltaje<1000){
digitalWrite(D8,LOW);
  digitalWrite(D7,HIGH);
  digitalWrite(D4,HIGH);
  

}
  if(voltaje>=30&&voltaje<520){
digitalWrite(D8,LOW);
  digitalWrite(D7,LOW);
  digitalWrite(D4,LOW);
  delay(500);
  digitalWrite(D4,HIGH);
  

}
if (voltaje<30&&voltaje>=0){
digitalWrite(D8,HIGH);
  digitalWrite(D7,HIGH);
  digitalWrite(D4,LOW);
delay(500);
digitalWrite(D8,LOW);
  digitalWrite(D7,LOW);
  digitalWrite(D4,HIGH); 
}

}
