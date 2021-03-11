#include <Servo.h>

Servo ServoM;    

void setup() {
  ServoM.attach(3);
}

void loop() {
  for (int ileri = 0 ; ileri <= 180 ; ileri = ileri + 15)
  {
    ServoM.write(ileri);
    delay(500);
  }
  for (int geri = 180 ; geri >= 0 ; geri = geri -30)
  {
    ServoM.write(geri);
    delay(500);
  }

}
