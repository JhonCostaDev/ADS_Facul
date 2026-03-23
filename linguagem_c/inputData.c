#include <stdio.h>
// Variables Types on C language
int main(void){
	int age;       //integer number
	int amount;
	float height;  // floating-point number
	double weight; //floating-point number double precision
	char letter;   //character
	char name[20]; //array of character
	

	printf("Enter your age:\n");
	scanf("%d", &age);
	printf("Enter a amount:\n");
	scanf("%d", &amount);
	printf("Enter a height:\n");
	scanf("%f", &height);
	printf("Enter your weight:\n");
	scanf("%lf", &weight);
	printf("Enter a letter:\n");
	scanf(" %c", &letter);
	printf("Enter your name:\n");
	scanf("%s", name);

	printf("=====Resume=====\nName: %s\nAge: %d\nHeight: %.2f\nWeight: %.2f\nLetter: %c\n",name, age, height, weight, letter);
	return 0;
}
