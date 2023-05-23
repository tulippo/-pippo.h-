#ifndef PIPPO_H
#define PIPPO_H

#include "Arduino.h"

class pinout{
	public:
		pinout(int pin);
		void piscar(int ms);
		
	private:
		int _pin;
		
};

#endif