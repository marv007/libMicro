#ifndef libMicro_h
#define libMicro_h
#include "Arduino.h"

class display{
	private:
	byte pinDisplay[7];

	public:
	void mostrar(byte);
	//void apagar();
	//void configurar(byte[7]);
	void configurar(byte a, byte b, byte c, byte d, byte e, byte f, byte g);
	//display();
	display(byte[7]);
	display(byte a, byte b, byte c, byte d, byte e, byte f, byte g);
};


#endif
