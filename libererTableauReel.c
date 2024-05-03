#include<stdlib.h>

void libererTableauReel(double *T){
	free(T+1);
}
