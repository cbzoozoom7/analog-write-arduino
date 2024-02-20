int ledPin = 3;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int ledBrightness = 0;ledBrightness < 255; ledBrightness++) {
analogWrite(ledPin,ledBrightness);
delay(10);
  }
  for(int ledBrightness = 255;ledBrightness > 0;ledBrightness--) {
  analogWrite(ledPin,ledBrightness);
delay(10);
  }
}
