/*
  Blink- Trying old things on new electronics. 

  Turns an LED on and off in a ramping pattern. I could fix the granularity I just dont feel like it. 

*/
int DOSE = 12;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED as an output.
  pinMode(LED, OUTPUT);
  pinMode(DOSE, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int test = 0;
  for(;test <= 10;test++)
    setLED(test,LED_BUILTIN);
  test = 9;
  for(;test>=0;test--)
    setLED(test,LED_BUILTIN);
}

void setLED(short test, int LED){
  int x = 0;
  switch(test){
  case 0: 
    for(x = 20; x > 0; x--){
      digitalWrite(LED, LOW);
      digitalWrite(DOSE, HIGH);
      delay(1);
      digitalWrite(LED, HIGH);
      digitalWrite(DOSE, LOW);
      delay(10);
    }
    break;
  case 1: 
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED, LOW);
    delay(1);
    digitalWrite(LED, HIGH);
    delay(9);
    }
    break;
  case 2:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED, LOW);
    delay(2);
    digitalWrite(LED, HIGH);
    delay(8);
    }
    break;
  case 3:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED, LOW);
    delay(3);
    digitalWrite(LED, HIGH);
    delay(7);
    }
    break;
  case 4:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED, LOW);
    delay(4);
    digitalWrite(LED, HIGH);
    delay(6);
    }
    break;
  case 5:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED, LOW);
    delay(5);
    digitalWrite(LED, HIGH);
    delay(5);
    }
    break;
  case 6:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED, LOW);
    delay(6);
    digitalWrite(LED, HIGH);
    delay(4);
    }
    break;
  case 7:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED, LOW);
    delay(7);
    digitalWrite(LED, HIGH);
    delay(3);
    }
    break;
  case 8:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED, LOW);
    delay(8);
    digitalWrite(LED, HIGH);
    delay(2);
    }
    break;
  case 9:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED, LOW);
    delay(9);
    digitalWrite(LED, HIGH);
    delay(1);
    }
    break;
  case 10:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED, LOW);
    delay(10);
    digitalWrite(LED, HIGH);
    delay(0);
    }
    break;
  default:
    break;
  }
}