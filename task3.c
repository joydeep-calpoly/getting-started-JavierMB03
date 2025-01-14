#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char *endptr;
	long num;

	if (argc > 3 || argc <=2 ){
	printf("Invalid arguments");
	return 0;
	}

	num = strtol(argv[1], &endptr, 10);

	
	if(*endptr != '\0'){
	printf("Error does not point to null character");
	return 0;	
	} 

	if(num < 0){
	printf("Error: negative number");
	}



	for (long i = 0; i<num; i++){

	printf("%s", argv[2]);

	} 

	return 0;
}
