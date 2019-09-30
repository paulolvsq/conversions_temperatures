#include <stdio.h>
#include "fonctions.h"

int celsius_vers_kelvin(int temperature) {

		int retour = temperature + 273;
		return retour;

}

int celsius_vers_fahrenheit(int temperature) {

		float res = (9.0/5.0) * temperature + 32;
		int retour = (int) (res);
		return retour;

}

int fahrenheit_vers_celsius(int temperature) {

	float res = (temperature - 32)/1.8;
	int retour = (int) (res);
	return retour;

}


int fahrenheit_vers_kelvin(int temperature) {

		int tmp = fahrenheit_vers_celsius(temperature);
		tmp = celsius_vers_kelvin(tmp);
		return tmp;

}

int kelvin_vers_celsius(int temperature) {

		int retour = temperature - 273;
		return retour;

}

int kelvin_vers_fahrenheit(int temperature) {

		int tmp = kelvin_vers_celsius(temperature);
		tmp = celsius_vers_fahrenheit(tmp);
		return tmp;

}














