int sensor = 9;
int led = 8;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  bool sensorValue = !digitalRead(sensor);
  Serial.println(sensorValue);
  if(sensorValue){
     digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
}
