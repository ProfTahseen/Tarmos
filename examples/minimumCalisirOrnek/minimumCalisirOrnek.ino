
#include <Tarmos.h>

void ornekFonksiyon() {
  Serial.println("Merhaba Tarmos!");
}

Tarmos tarmos("testModule", ornekFonksiyon);

void setup() {
  
  tarmos.begin();

}

void loop() {

  tarmos.update();

}
