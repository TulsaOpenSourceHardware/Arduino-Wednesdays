/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int RED1 = 9;
int RED2 = 6;
int YELLOW1 = 5;
int YELLOW2 = 3;
int GO = 2;
int leds[4] = {RED1, RED2, YELLOW1, YELLOW2};
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(RED1, OUTPUT);
  pinMode(RED2, OUTPUT);
  pinMode(YELLOW1, OUTPUT);
  pinMode(YELLOW2, OUTPUT);
  pinMode(GO, OUTPUT);
  
  digitalWrite(GO, LOW);
}

void blink(){
  for(int i = 0; i < 4; i++){
    digitalWrite(leds[i], HIGH);
  }
  delay(40);
  for(int i = 0; i < 4; i++){
    digitalWrite(leds[i], LOW);
  }
  delay(40);
}

void turn_on(int interval){
  for(int j = 0; j < 256; j++){
    for(int i = 0; i < 4; i++){
      analogWrite(leds[i], j);
    }
    delay(interval);
  }
  for(int i = 0; i < 10; i++){
    blink();
  }
}

void turn_off(int interval){
  for(int j = 255; j >= 0; j--){
    for(int i = 0; i < 4; i++){
      analogWrite(leds[i], j);
    }
    delay(interval);
  }
}

void loop() {
  turn_on(10);
  delay(100);
  turn_off(1);
  delay(500);
}
