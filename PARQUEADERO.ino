#define l 4;
#define q 3;
int l=0;
float q=0;
int coste=0;
cupos=0;

void setup()
{
 Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
}

void loop(){
  cupos>=0;
  if(cupos<15){
    digitalWrite(5,HIGH);
    digitalWrite(7,LOW);
  }
  else{ 
    digitalWrite(5,LOW);
      digitalWrite(7,HIGH);
  }
  
  if (l==HIGH && cupos<15){
     cupos=cupos+1;
    delay(1000);
  Serial.print("\n hay ");
    Serial.print(cupos);
    Serial.print(" vehiculos");
 

  
    
    if (cupos>14){
      Serial.print("\n ¡PARQUEADERO LLENO!");
      delay(3000);
    }
  
  }
  if(q==HIGH&&cupos>0){
    cupos=cupos-1;
    coste=coste+5;
      delay(1000);
    Serial.print("\n ¡GRACIAS! +");
    Serial.print(coste);
    Serial.print("K COP");
  Serial.print("\n hay ");
    Serial.print(cupos);
    Serial.print(" vehiculos");
  } 
}

  
  
      
