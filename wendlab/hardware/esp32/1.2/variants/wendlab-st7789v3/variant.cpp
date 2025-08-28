#include "esp32-hal-gpio.h"
#include "pins_arduino.h"

extern "C" {

// Initialize variant/board, called before setup()
void initVariant(void) {
  // default SD_CS to input pullup
  //pinMode(SS, INPUT_PULLUP);
}
}
