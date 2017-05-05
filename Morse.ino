#include <Morse.h>

// this is a function in the .h library its syntax is:
//library name function name (argument);
Morse morse (13);

void setup(){

}

void loop(){
  morse.dot();
  morse.dot();
  morse.dot();
  morse.dash();
  delay(500);
}
