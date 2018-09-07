/*
  Blink- Trying old things on new electronics. 

  Turns an LED on and off in a ramping pattern. I could fix the granularity I just dont feel like it. 

*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int test = 0;
  for(;test <= 10;test++)
    setLED(test);
  test = 9;
  for(;test>=0;test--)
    setLED(test);
}

void setLED(short test){
  int x = 0;
  switch(test){
  case 0: 
    for(x = 20; x > 0; x--){
      digitalWrite(LED_BUILTIN, LOW);
      delay(0);
      digitalWrite(LED_BUILTIN, HIGH);
      delay(10);
    }
    break;
  case 1: 
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED_BUILTIN, LOW);
    delay(1);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(9);
    }
    break;
  case 2:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED_BUILTIN, LOW);
    delay(2);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(8);
    }
    break;
  case 3:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED_BUILTIN, LOW);
    delay(3);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(7);
    }
    break;
  case 4:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED_BUILTIN, LOW);
    delay(4);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(6);
    }
    break;
  case 5:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED_BUILTIN, LOW);
    delay(5);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(5);
    }
    break;
  case 6:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED_BUILTIN, LOW);
    delay(6);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(4);
    }
    break;
  case 7:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED_BUILTIN, LOW);
    delay(7);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(3);
    }
    break;
  case 8:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED_BUILTIN, LOW);
    delay(8);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(2);
    }
    break;
  case 9:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED_BUILTIN, LOW);
    delay(9);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1);
    }
    break;
  case 10:
    for(x = 20; x > 0 ; x--){
    digitalWrite(LED_BUILTIN, LOW);
    delay(10);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(0);
    }
    break;
  default:
    break;
  }
}