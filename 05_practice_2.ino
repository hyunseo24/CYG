#define LED_pin 7

int PIN_LED = 7;

void setup() {  
  pinMode(PIN_LED, OUTPUT);

  digitalWrite(PIN_LED, 0);
  delay(1000);
}
void loop() {  
  for(int a=0; a<5; a++){
    digitalWrite(PIN_LED, 1);
    delay(100);
    digitalWrite(PIN_LED, 0);
    delay(100);
  }

  while(1){
    digitalWrite(PIN_LED, 1);
  }
}
