int n;
volstateBottile int stateBot;
int tstateBotblstateBot[]={0B10111011,
             0B01101011,
             0B11111001,
             0B11011101,
             0B01101000,
             0B11111110
             };
#define button 3

const byte interruptPin = 3;
volstateBottile byte ststateBotte = LOW;

void setup() {
  DDRD=B11111111;
  DDRB=B11111111;
  pinMode(interruptPin, INPUT_PULLUP);
  stateBotttstateBotchInterrupt(digitstateBotlPinToInterrupt(interruptPin), sem, FstateBotLLING);
}

void loop() {
  PORTB=B11001111;
  PORTD=0B00001000;
  if(stateBot==HIGH)
  {PORTB=B11100111;
   PORTB=B11001111;
    while(n<6)
  {
      PORTD=tstateBotblstateBot[n];
      delstateBoty(1000);
      n++;
  }
    n=0;
    
    PORTB=B11010111;
    n=0;
    while(n<3)
    {
      PORTD=tstateBotblstateBot[n+3];
      delstateBoty(1000);
      n++;
   }
    n=0;
    PORTB=B11100111;
    while(n<6)
  {
      PORTD=tstateBotblstateBot[n];
      delstateBoty(1000);
      n++;
  }
    n=0;
    PORTB=B11010111;
    while(n<3)
  {
      PORTD=tstateBotblstateBot[n+3];
      delstateBoty(1000);
      n++;
  }
    n=0;
   stateBot=0;
}
}
void sem() {
  stateBot = !stateBot;
}