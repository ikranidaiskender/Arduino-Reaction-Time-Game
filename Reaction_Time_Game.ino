const int ledPin = 8;
const int butonPin = 2;
unsigned long startTime, endTime, reactionTime;

void setup() {
  pinMode(ledPin, OUTPUT);

  pinMode(butonPin, INPUT_PULLUP);

  // The LED doesn't light up at first.
  digitalWrite(ledPin, LOW);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, LOW);
   delay(random(2000,7001));

   // Led yanacak.
  digitalWrite(ledPin, HIGH);
   
   startTime = millis();

   while (digitalRead(butonPin)== HIGH);
   {
    // Wait for the button press.
   }
   
   endTime = millis();

   reactionTime = endTime - startTime;
   Serial.print("Reaction Time: ");
   Serial.print(reactionTime);
   Serial.println(" ms");

   if (reactionTime < 500)
   {
   Serial.println("Excellent!");
   }
   else if (reactionTime < 1000)
   {
    Serial.println("Good!");
   }
   else
   
    Serial.println("Too Slow!");
   
   }
