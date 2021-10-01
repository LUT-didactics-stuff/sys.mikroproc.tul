#include<avr/io.h>
#include<avr/delay.h>

int main() {
  // put your setup code here, to run once:

  DDRH |= 0x08;
  PORTH = 0x08;
  DDRE |= 0x08;
  PORTE &= ~0x08;
  DDRB |= 0x20;
  PORTB = 0x20;
  while(1){
    _delay_ms(400);
    PORTH ^= 0x08;
    PORTE ^= 0x08;
    PORTB ^= 0x20;
  }

  return 0;
}