#include <stdio.h>

int main(int argc, char *argv[]){
	FILE *fp_input;

	fp_input = fopen(argv[1], "r");

	if(fp_input == NULL){
		printf("Can't read file!\n");
		return 0;
	}

	return 0;
}