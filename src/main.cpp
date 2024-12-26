#include <Arduino.h>

int x0 = 0;
float alpha = .9;

int x01 = 0;
float alpha1 = .2;
char buf[10];

void setup() {
  // put your setup code here, to run once:
    Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
    int x1 = analogRead(15);
    x0 = x1 * alpha + (1 - alpha) * x0;
    x01 = x1 * alpha1 + (1 - alpha1) * x01;
    Serial.printf("%d\t%d\t%d\n", x1, x0, x01);
    delay(500);
}
