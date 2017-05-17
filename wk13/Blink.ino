const int analogPin = A0; // the pin that the potentiometer is attached to
const int ledCount = 10; // the number of LEDs in the bar graph
int ledPins[] = {


2, 3, 4, 5, 6, 7, 8, 9, 10, 11


}; // an array of pin numbers to which LEDs are attached


void setup() {


// loop over the pin array and set them all to output:


  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }


}




void loop() {
  int dtime;
  
        for(int i=0;i<=10;i++){
          digitalWrite(ledPins[i], HIGH);
          int sensorReading = analogRead(analogPin);
          dtime=map(sensorReading, 0, 1000, 50, 800);
          delay(dtime);
        }
      // turn off all pins higher than the ledLevel:
        for(int i=10;i>=0;i--){
         digitalWrite(ledPins[i], LOW);
         int sensorReading = analogRead(analogPin);
         dtime=map(sensorReading, 0, 1000, 50, 800);
         delay(dtime);
       }
}
