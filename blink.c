#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  // Example blink led program for the uno
  DDRB = DDRB | (1 << DDB5);

  while(1) {
    PORTB = PORTB | (1 << PORTB5);
    _delay_ms(500);
    PORTB = PORTB & ~(1 << PORTB5);
    _delay_ms(500);
  }
}
