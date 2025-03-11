#include<dht.h>

dht DHT11;

#define DHT11_PIN A1

void setup() {

Serial.begin(9600);

}

void loop() {

int chk = DHT11.read11(DHT11_PIN);

Serial.print(" Humidade " );

Serial.print(DHT11.humidity, 1);

Serial.print(" ");

Serial.print(" Temperatura ");

Serial.println(DHT11.temperature, 1);

delay(2000);

}
