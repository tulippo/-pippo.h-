#include "pippo.h"
#include "Arduino.h"

pinout::pinout(int pin){
	pinMode(pin, OUTPUT);
	_pin = pin;
}

void pinout::piscar(int ms){
	digitalWrite(_pin, !digitalRead(_pin));
	delay(ms);
}