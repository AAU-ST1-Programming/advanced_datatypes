enum PINS{LEFT=0, RIGHT=35};

void setup() {
  // put your setup code here, to run once:
pinMode(LEFT,INPUT_PULLUP);
pinMode(RIGHT,INPUT_PULLUP);
Serial.begin(115200);

delay(400);
}

void loop() {
  // put your main code here, to run repeatedly:
  int left = digitalRead(LEFT);
  int right = digitalRead(RIGHT);

  printf("left:%i, right:%i\n", left, right);
  delay(100);
}
