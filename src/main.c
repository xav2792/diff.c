#include <stdio.h>
#include "diff.h"

int main ( int argc, char** argv ) {
	FILE *fichier1 = NULL;
	FILE *fichier2 = NULL;
	int i;
	int parametre;
	if (2 > argc) {
        printf("Nombre de parametres insuffisants\n");
        return 1; 
    }
	
	
	// Parcours des paramètres
	for (i=1; i<argc; i++) {
		if( argv[1][0] == TIRET ) {
			parametre = argv[1][1];
		}
	}
	
	
	
	switch(parametre) {
		case q :
			// Ouverture du fichier numero 1
			fichier1 = fopen(argv[2], "r+");
			if(fichier1==NULL) { printf("Impossible d'ouvrir le fichier %s\n", argv[1] ); 
								 return 1; }
					
			// Ouverture du fichier numero 2
			fichier2 = fopen(argv[3], "r+");
			if(fichier2==NULL) { printf("Impossible d'ouvrir le fichier %s\n", argv[2] );
								 return 1; }
								 
			
			if(brief(fichier1, fichier2) == 0) {
				printf("Les fichiers %s et %s sont différents", argv[2], argv[3]);
			} else {
				printf("les fichiers sont egaux");
			}
			break;
	}
	
	
	
	fclose(fichier1);
	fclose(fichier2);
	
	
	
	return 0;
}
