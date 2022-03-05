int laserPin = 11;
int motor = 10;

void setup ()
{
  pinMode(laserPin, OUTPUT);
  pinMode(motor, OUTPUT);
}

void loop () {
  digitalWrite(laserPin, HIGH);
  digitalWrite(motor, HIGH);
}
