int LED1 = 13;



void setup() {
  // put your setup code here, to run once:

pinMode (LED1, OUTPUT);

}





void loop() {
  // put your main code here, to run repeatedly:


digitalWrite(LED1, HIGH);   // turn on LED1
delay(2000);
                // wait for 20000ms
digitalWrite(LED1, LOW);   // turn off LED1
delay (2000);     // restart program

}
