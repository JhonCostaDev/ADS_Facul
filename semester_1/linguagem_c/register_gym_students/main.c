#include <stdio.h>
#include <managerStudent.h>

int main() {

    struct Student students[MAX_STUDENTS]; //array of registers
    int totalStudents = 0;          //count registers 
    int option;

    loadData(students, &totalStudents);

    do {
        printf("\n===== MENU =====\n");
        printf("\n1. Register\n2. List Students\n0. Exit\n Type the option:\n");
        scanf("%d", &option);

        if (option == 1) {
            registerNewStudent(students, &totalStudents); //totalStudents is pointer and need (&)
        } else if (option == 2) {
            for(int i = 0; i < totalStudents; i++){
                printf("ID: %d\nName: %s\nWeigth: %f\n", students[i].id, students[i].name, students[i].weight);
            }
        }
    } while (option != 0);
    
    return 0;
}



