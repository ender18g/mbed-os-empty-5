#include "mbed.h"

// main() runs in its own thread in the OS
int main() {
  AnalogIn pot(PA_0);
  PwmOut motor(D1);
  float pot_val;
  printf("Starting Program...\n");

  while (1) {
    pot_val = pot.read();
    printf("%.2f\n", pot_val);
    motor = pot_val;
  }
}
