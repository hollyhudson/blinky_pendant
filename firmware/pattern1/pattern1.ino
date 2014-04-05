/** \file
 * Blink all three LEDs on Holly's board.
 * PB4 = Red
 * PB1 = Green
 * PB0 = Blue
 * \todo: Write docs on how to program it.
*/

#define RED 4
#define GREEN 1
#define BLUE 0
 
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  DDRB = (1 << RED) | (1 << GREEN) | (1 << BLUE);
  PORTB = 0;
}

void red(void) { PORTB = (0 << RED) | (1 << GREEN) | (1 << BLUE); }
void green(void) { PORTB = (1 << RED) | (0 << GREEN) | (1 << BLUE); }
void blue(void) { PORTB = (1 << RED) | (1 << GREEN) | (0 << BLUE); }
void off(void) { PORTB = (1 << RED) | (1 << GREEN) | (1 << BLUE); }
 
// the loop routine runs over and over again forever:
void loop() {
    red(); delay(2); off(); delay(2);
    green(); delay(2); off(); delay(2);
    blue(); delay(2); off(); delay(2);

    delay(3);
}

