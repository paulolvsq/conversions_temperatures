#include <stdio.h>
#include "fonctions.h"

int main() {

    int depart;
    int arrivee;
    int t;

    do {

	printf("Choisissez l'unité de départ : \n\n");
	printf("1. Celsius \n");
	printf("2. Fahrenheit \n");
	printf("3. Kelvin \n");
	printf("4. Quitter \n");
	printf("Entrez 1, 2 ou 3 selon l'unité souhaitée : \n");		
	printf("(Entrez un nombre entier uniquement compris entre 1 et 4)\n\n");
	scanf("%d", &depart);
		
	if(depart == 4) break;

	printf("Entrez la température que vous souhaitez convertir : \n");
	printf("(Entrez un nombre entier uniquement)\n \n");
	scanf("%d", &t);

	printf("Choisissez l'unité d'arrivée : \n\n");
	printf("1. Celsius \n");
	printf("2. Fahrenheit \n");
	printf("3. Kelvin \n");
	printf("4. Quitter \n");
	printf("Entrez 1, 2 ou 3 selon l'unité souhaitée : \n");		
	printf("(Entrez un nombre entier uniquement compris entre 1 et 4)\n\n");
	
	scanf("%d", &arrivee);

	if(arrivee == 4) break;

	//on fait tous les cas possibles en sachant que ça ne peut changer qu'une fois


	//on traite les cas simples en premier
	if(depart == 1 && arrivee == 1) { 

	    printf("La température est de %d degrés Celsius.\n\n", t);

	}

	if(depart == 2 && arrivee == 2) {
			
	    printf("La température est de %d degrés Fahrenheit.\n\n", t);

	}

	if(depart == 3 && arrivee == 3) {
			
	    printf("La température est de %d degrés Kelvin.\n\n", t);

	}

	//celsius vers autre chose
	if(depart == 1 && arrivee == 2) {

	    printf("La température entrée est de %d degrés Celsius.\n\n", t);
	    t = celsius_vers_fahrenheit(t);
	    printf("La température obtenue est de %d degrés Fahrenheit.\n\n", t);
				
	}

	if(depart == 1 && arrivee == 3) {

	    printf("La température entrée est de %d degrés Celsius.\n\n", t);
	    t = celsius_vers_kelvin(t);
	    printf("La température obtenue est de %d degrés Kelvin.\n\n", t);

	}

	//fahrenheit vers autre chose
	if(depart == 2 && arrivee == 1) {

	    printf("La température entrée est de %d degrés Fahrenheit.\n\n", t);
	    t = fahrenheit_vers_celsius(t);
	    printf("La température obtenue est de %d degrés Celsius.\n\n", t);
				
	}

	if(depart == 2 && arrivee == 3) {

	    printf("La température entrée est de %d degrés Fahrenheit.\n\n", t);
	    t = fahrenheit_vers_kelvin(t);
	    printf("La température obtenue est de %d degrés Kelvin.\n\n", t);

	}

	//kelvin vers autre chose
	if(depart == 3 && arrivee == 1) {

	    printf("La température entrée est de %d degrés Kelvin.\n\n", t);
	    t = kelvin_vers_celsius(t);
	    printf("La température obtenue est de %d degrés Celsius.\n\n", t);
				
	}

	if(depart == 3 && arrivee == 2) {

	    printf("La température entrée est de %d degrés Kelvin.\n\n", t);
	    t = kelvin_vers_fahrenheit(t);
	    printf("La température obtenue est de %d degrés Fahrenheit.\n\n", t);

	}

    } while (1);

    printf("Relancez le programme pour convertir de nouveau d'autres températures.\n\n");

    return 0;

}



