volatile boolean led= false;
int button=2;
int Estado=0 ;


void setup()	
{
 	DDRD=B11111011;
//  pinMode(button,INPUT);
//  pinMode(3,OUTPUT);
  attachInterrupt(0,presionado,RISING);
}

void loop() 
{
  
}

void presionado ()
{
  if (led)
  {
    led= false ;
 //   digitalWrite(3,LOW);
    PORTD= B11110011;
  }
  else
  {	
    led=true;
  //  digitalWrite(3,HIGH);
    PORTD= B11111011;
  }

}                     

