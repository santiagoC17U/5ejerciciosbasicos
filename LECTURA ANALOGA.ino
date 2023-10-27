void setup (){

  pinMode (7,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (11,OUTPUT);
  pinMode (10,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int ValorADC;
  float voltaje;
 
  ValorADC= analogRead(A0);
  voltaje= ValorADC*(5.0/1.023)/(1000);
  Serial.print("Voltaje= ");
  Serial.println(voltaje);
  delay(2);
}

  
      
