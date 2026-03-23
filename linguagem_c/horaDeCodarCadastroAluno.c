#include <stdio.h>

int main(void){
	int age, id;
	float height;
	char name[50];

	printf("Enter your name\n");
	scanf("%s", name);

	printf("Enter your school ID\n");
	scanf("%d", &id);

	printf("Enter your age\n");
	scanf("%d", &age);

	printf("===== Resume =====\n");
	printf("Student: %s\nStudent ID: %d\nStudent height: %d",name, id, age);



	return 0;
}
