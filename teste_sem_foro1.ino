int  ledR = 2;
int ledA = 4;
int ledV = 7;
int PeR = 8;
int PeV = 12;
int pulsador = 13;
int estadopulsador;

void setup(){
  pinMode(ledR, OUTPUT);
  pinMode(ledV, OUTPUT);
  pinMode(ledA, OUTPUT);
  pinMode(PeR, OUTPUT);
  pinMode(PeV, OUTPUT);
  pinMode(pulsador, INPUT);
}

void loop(){
  pulsador = digitalRead(13);   
  if(digitalRead(pulsador)==LOW){
      digitalWrite(ledV, HIGH);
    digitalWrite(PeR, HIGH);}else{
  if(digitalRead(pulsador)==HIGH) {   
    digitalWrite(ledV, LOW);    
    digitalWrite(ledR, LOW);
    digitalWrite(ledA, HIGH);   
    digitalWrite(PeV, LOW);
    digitalWrite(PeR, LOW);
      delay(6000);                 
   
    digitalWrite(ledA, LOW);    
    digitalWrite(ledR, HIGH);
    digitalWrite(PeV, HIGH);
    digitalWrite(PeR, LOW);
    digitalWrite(ledV, LOW);
   
    delay(2000);                
    digitalWrite(ledR, LOW);    
    digitalWrite(ledV, HIGH);
    digitalWrite(PeR, HIGH);
    digitalWrite(PeV, LOW);
    digitalWrite(ledA, LOW);
    delay(6000);}}
} 
    

