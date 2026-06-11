#define F_CPU 16000000UL
#include<avr/io.h>
#include<util/delay.h>
void uart_init(void){
  unsigned int ubrr=103;
  UBRR0H=(unsigned char)(ubrr>>8);
  UBRR0L=(unsigned char)(ubrr);
  UCSR0B=(1<<TXEN0);
  UCSR0C=(1<<UCSZ01)|(1<<UCSZ00);
}
void send_char(char c){
  while(!(UCSR0A & (1<<UDRE0))){}
  UDR0=c;
}
int main (void){uart_init();
  while(1){
    send_char('A');
    _delay_ms(1000);
    send_char('\n');
    _delay_ms(1000);
  }
}

