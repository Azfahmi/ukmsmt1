#include <avr/io.h>
#include <util/delay.h>



void untuk_pwm(){
  TCCR1A|=(1<<WGM00)|(1<<WGM01)|(1<<COM1A1)|(1<<CS00);
  TCCR1B|=(1<<WGM00)|(1<<WGM01)|(1<<COM1B1)|(1<<CS00);
  DDRB|=(1<<PB1)|(1<<PB2);
  
}
void untuk_adc()
{
  DDRC|=0x00;
  ADCSRA=(1<<ADEN)|(1<<ADPS2)|(1<<ADPS1);
  ADMUX|=(1<<REFS0);
}
int baca_adc(int pin){
  int Ainput,AinputLow;
  ADMUX|=ADMUX|(pin & 0x0F);
  ADCSRA|=(1<<ADSC);
  while((ADCSRA&(1<<ADIF))==0);
  _delay_ms(20);

  AinputLow=(int )ADCL;
  Ainput=(int)ADCH*256;
  Ainput=Ainput+AinputLow;
  return(Ainput);
}
int main(void){
   untuk_adc();
   untuk_pwm();
   PINC&=~(1<<PC1);
  while(1){
          int adc;
           adc=baca_adc(0);
                    
          if(bit_is_set(PINC,PINC1)){
            
              OCR1A=adc;
              PORTB=~0;
              
          }
          else{
            
              OCR1A=adc;
              PORTB=0;
          }
        
      }
}

