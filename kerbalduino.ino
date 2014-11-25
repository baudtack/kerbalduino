#define NEXT_STAGE            "STAGE\n"
#define STAGE_PIN               3

void setup() {
  Serial.begin(9600);
  pinMode(STAGE_PIN, INPUT);
  
}

void loop() {
  if(digitalRead(STAGE_PIN) == HIGH) {
    Serial.write(NEXT_STAGE);
  } 
  delay(150);
}
