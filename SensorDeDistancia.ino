#include <HCSR04.h>

HCSR04 SensorDeDistancia(13 , 12);

int distancia = 0;
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  distancia = SensorDeDistancia.dist()/100;
  Serial.println(distancia);
  delay(1000);
}
