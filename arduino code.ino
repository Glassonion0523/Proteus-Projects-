
bool ON;
int Light = 0;

void setup() 
{
  pinMode(2, INPUT);
  pinMode(9, OUTPUT);
}

void loop() 
{
  if(digitalRead(2) == HIGH && Light == 0)
  {
    ON = true;
    Light = 1;
  }
  else
  {
  }

  if(ON)
  {
    digitalWrite(9,HIGH);
    delay(1000);
    if(digitalRead(2) == HIGH && Light == 1)
    {
      ON = false;
    }
  }
  else
  {
    digitalWrite(9,LOW);
    Light = 0;
    delay(1000);
  }
}

