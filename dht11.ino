#include <DHT.h>
DHT dht(2,DHT11);
void setup() 
{
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float h=dht.readHumidity();
  float t=dht.readTemperature();
  Serial.begin("Humidty:");
  Serial.print(h);
  Serial.println("%");
  Serial.print(t);
  Serial.print("*C");
  delay(500);

}
