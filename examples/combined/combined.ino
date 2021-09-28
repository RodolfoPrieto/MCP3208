#include <MCP3208.h>

MCP3208 adc;
int count = 0;

void setup() {
  Serial.begin(9600);
  while (!Serial);

  Serial.println("MCP3208 convined test.");

  adc.begin(6);
}

void loop() {

  Serial.print(adc.readADC(0)); Serial.print("\t");
  Serial.print(adc.readADC(1)); Serial.print("\t");
  Serial.print(adc.readADCDifference(0)); Serial.print("\t");

  Serial.print("["); Serial.print(count); Serial.println("]");
}
