int red1 = 0;
int yellow1 = 1;
int green1 = 2;
int red2 = 6;
int yellow2 = 7;
int green2 = 8;
int red3 = 11;
int yellow3 = 12;
int green3 = 13;

void setup()
{
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(red3, OUTPUT);
  pinMode(yellow3, OUTPUT);
  pinMode(green3, OUTPUT);
}

void setLights(int _red1, int _yellow1, int _green1, int _red2, int _yellow2, int _green2, int _red3, int _yellow3, int _green3, int delayTime)
{
  digitalWrite(red1, _red1);
  digitalWrite(yellow1, _yellow1);
  digitalWrite(green1, _green1);
  digitalWrite(red2, _red2);
  digitalWrite(yellow2, _yellow2);
  digitalWrite(green2, _green2);
  digitalWrite(red3, _red3);
  digitalWrite(yellow3, _yellow3);
  digitalWrite(green3, _green3);
  delay(delayTime);
}

void loop()
{
  setLights(HIGH, LOW, LOW, LOW, LOW, HIGH, HIGH, LOW, LOW, 15000);
  setLights(HIGH, LOW, LOW, LOW, HIGH, LOW, HIGH, LOW, LOW, 3000);
  setLights(HIGH, LOW, LOW, HIGH, LOW, LOW, HIGH, LOW, LOW, 3000);
  setLights(HIGH, LOW, LOW, HIGH, LOW, LOW, HIGH, HIGH, LOW, 3000);
  setLights(HIGH, LOW, LOW, HIGH, LOW, LOW, LOW, LOW, HIGH, 15000);
  setLights(HIGH, LOW, LOW, HIGH, LOW, LOW, LOW, HIGH, LOW, 3000);
  setLights(HIGH, LOW, LOW, HIGH, LOW, LOW, HIGH, LOW, LOW, 3000);
  setLights(HIGH, HIGH, LOW, HIGH, LOW, LOW, HIGH, LOW, LOW, 3000);
  setLights(LOW, LOW, HIGH, HIGH, LOW, LOW, HIGH, LOW, LOW, 15000);
  setLights(LOW, HIGH, LOW, HIGH, LOW, LOW, HIGH, LOW, LOW, 3000);
  setLights(HIGH, LOW, LOW, HIGH, LOW, LOW, HIGH, LOW, LOW, 3000);
  setLights(HIGH, LOW, LOW, HIGH, HIGH, LOW, HIGH, LOW, LOW, 3000);

}
