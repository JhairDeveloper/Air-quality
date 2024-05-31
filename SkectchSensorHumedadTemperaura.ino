#include <DHT.h>

DHT dht (4, DHT11);



void setup() {
  // put your setup code here, to run once:
  dht.begin();
  delay(3000);

  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  float temperatura = dht.readTemperature();
  float humedad = dht.readHumidity();
  Serial.print("Temp: ");
  Serial.print(temperatura);
  Serial.println(" C");

  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.print("%");

  delay(3000);
}
