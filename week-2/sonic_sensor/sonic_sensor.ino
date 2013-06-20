
int signal=3;

void setup(){
  pinMode(signal, OUTPUT);
  Serial.begin(9600);
}

float distance()
{
  unsigned long duration=0;
  
  //set to low incase we have ran recently
  pinMode(signal, OUTPUT);
  digitalWrite(signal, LOW);
  delayMicroseconds(5);
  
  digitalWrite(signal, HIGH);
  delayMicroseconds(5);
  digitalWrite(signal, LOW);
  
  pinMode(signal, INPUT);
  duration = pulseIn(signal, HIGH);
 
  return float((duration / 2) / 29.412);
  
}

void loop(){
  Serial.print(distance());
  Serial.println(" cm");
  delay(300);
}
