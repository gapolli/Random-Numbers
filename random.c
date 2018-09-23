#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

#define NLINES 100
#define NMAX 1000

char fname[3][8] = {"arq1.in", "arq2.in", "arq3.in"};

int main(void){
	time_t t;
	srand((unsigned) time(&t));
	FILE* f;
	for(int i=0; i<3; i++){
		f = fopen(fname[i], "w");
		for(int j=0; j<NLINES; j++){
			fprintf(f, "%d\n", rand() % NMAX);
		}
		fclose(f);
	}
	return 0;
}
