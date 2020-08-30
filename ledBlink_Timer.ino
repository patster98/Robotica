#define led 8
void setup()
{
  DDRB = B1;
  
  noInterrupts(); //apaga todas las interrup
  //seteo timers
  	TCCR1A = 0; //uso el timer 1, por eso el 1
  	TCCR1B = 0; //voy a usar prescaler asi q mando a 0 todo
  
  	TCNT1 = 0xC2F7; // inicia timer para desbordamiento 1 segundo    
  	TCCR1B |= (1<<CS10)|(1 << CS12); //seteo el prescaler a 1024
  	TIMSK1 |= (1 << TOIE1); //habilita el timer 1
  interrupts(); //habilita denuevo las interrupciones
}

void loop()
{
  }

ISR(TIMER1_OVF_vect)                              
{
  TCNT1 = 0xC2F7; //reinicio el timer                                
  digitalWrite(led, digitalRead(led) ^ 1);   //invierte estado del LED
}
