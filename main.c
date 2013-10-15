#include <stdio.h>
#include "diff.h"

int main ( int argc, char** argv ) {
	FILE *fichier1 = NULL;
	FILE *fichier2 = NULL;

	if (2 > argc) {
        printf("Nombre de parametres insuffisants\n");
        return 1; 
    }
	
	fichier1 = fopen(argv[1], "r+");
	if(fichier1!=NULL) {
		printf("%s OK\n", argv[1] );
	} else {
		printf("Impossible d'ouvrir le fichier %s\n", argv[1] );
	}
	
	
	
	fichier2 = fopen(argv[2], "r+");
	if(fichier2!=NULL) {
		printf("%s OK\n", argv[2] );
	} else {
		printf("Impossible d'ouvrir le fichier %s\n", argv[2] );
	}
	
	//diff(argv[1]);
	
	
	
	fclose(fichier1);
	fclose(fichier2);
	
	
	
	return 0;
}
