#include <stdio.h>

int main(){
	double cels;
	double fahr;

	printf("Please enter temperature in Celsius \n");
	scanf("%lf", &cels);
	fahr = (cels*1.8)+32;

	printf("Fahrenheit: %lf \n", fahr);
	
	if (fahr >= 100){
	printf("Warning: Heat wave\n");
	}
	else if(fahr >= 80 && fahr <= 99){
	printf("Hot\n");
	}
	else if (fahr >= 41 && fahr <= 79){
	printf("Normal\n");
	}
	else if (fahr >= 10 && fahr <= 40){
	printf("Cold\n");
	}
	else{
	printf("Not applicable");
	}


	return 0;

}
