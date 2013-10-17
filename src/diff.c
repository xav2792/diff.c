#include <stdio.h>
#include "diff.h"



void diff(char * parametre) {
	printf("Salut %s\n", parametre);
	
}


/**
-q, --brief
       Indiquer seulement si les fichiers diffèrent
	   return 0 s'ils sont different et 1 s'ils sont égaux

*/
int brief(FILE * f1, FILE * f2) {
	int car2fich1;
	int car2fich2;
	int flag=1;
	// Boucle de comparaison
	while (car2fich1 != EOF || car2fich2 != EOF) {
		car2fich1 = fgetc(f1);
		car2fich2 = fgetc(f2);
		// Si les deux caractere sont diferrent
		if(car2fich1 != car2fich2) {
			flag=0;
		}
		//printf("car2fich1=%c car2fich1=%c\n", car2fich1, car2fich2);
	}
	
	return flag;
}