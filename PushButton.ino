const int Button = 2;
const int LED = 8;

void setup(){
  pinMode(Button,INPUT);
  pinMode(LED,OUTPUT);

  digitalWrite(Button, HIGH);
  
}

void loop(){
  if(digitalRead(Button)==LOW){
    digitalWrite(LED, HIGH);
    
  }else{
    digitalWrite(LED, LOW);
  }
}
