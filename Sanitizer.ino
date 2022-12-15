
int ir;
void setup() {                
  Serial.begin(9600);
 pinMode(8, OUTPUT);     
 
}

void loop() {
  ir=analogRead(A0);
  //Serial.println(ir);
  //delay(100);
  
  if(ir<100)
  {
     digitalWrite(8, HIGH);
     delay(300);
     digitalWrite(8, LOW);
     //delay(1000);
  }
   //digitalWrite(8, LOW);
   //delay(3000);
  
  
}
