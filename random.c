#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NLINES 100
#define NMAX 1000

char fname[10][8] = {"arq1.in", "arq2.in", "arq3.in", "arq4.in", "arq5.in", "arq6.in", "arq7.in", "arq8.in", "arq9.in", "arq10.in"};

int main(int argc, char* argv[]){
	time_t t;
	srand((unsigned) time(&t));
	FILE* f;
	if(argc==2){
		if(atoi(argv[1])>=1 && atoi(argv[1])<=10){
			for(int i=0; i<atoi(argv[1]); i++){
				f = fopen(fname[i], "w");
				for(int j=0; j<NLINES; j++){
					fprintf(f, "%d\n", rand() % NMAX);
				}
				fclose(f);
			}
		}
		else{
			exit(EXIT_FAILURE);
		}
	}
	else{
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}
