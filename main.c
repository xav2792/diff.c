#include <stdio.h>
#include "diff.h"

int main ( int argc, char** argv ) {
	if (2 > argc) {
        printf("Nombre de parametres insuffisants\n");
        return 1; 
    }
	diff(argv[1]);
	
	return 0;
}
