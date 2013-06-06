/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int RED1 = 10;
int RED2 = 9;
int YELLOW1 = 5;
int YELLOW2 = 3;
int GO = 2;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(RED1, OUTPUT);
  pinMode(RED2, OUTPUT);
  pinMode(YELLOW1, OUTPUT);
  pinMode(YELLOW2, OUTPUT);
  pinMode(GO, OUTPUT);
}


void turn_on(int led, int interval){
  digitalWrite(led, HIGH);
  delay(interval);
}
void turn_off(int led){
  digitalWrite(led, LOW);
}

void loop() {
  delay(1000);
  turn_on(RED1, 500);
  turn_on(RED2, 500);
  turn_on(YELLOW1, 500);
  turn_on(YELLOW2, 500);
  turn_off(RED1);
  turn_off(RED2);
  turn_off(YELLOW1);
  turn_off(YELLOW2);
  turn_on(GO, 2000);
  turn_off(GO);
}
