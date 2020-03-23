#include <Arduino.h>

String line = "";

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.print("Type a character to be echoed back.\n");
  Serial.print("> ");
}

void loop()
{
  // put your main code here, to run repeatedly:
  // send data only when you receive data:
  if (Serial.available() > 0)
  {
    // read the incoming byte:
    char incomingByte = Serial.read();
    if (incomingByte != '\r')
    {
      line += incomingByte;
      Serial.print(incomingByte);
    }
    else
    {
      // say what you got:
      Serial.print("\n");
      Serial.print("You typed: ");
      Serial.print(line);
      Serial.print("\n> ");
      line = "";
    }
  }
}