#include <stdio.h>

#define MAX_STUDENTS 100

struct Student { //before be used
    int id;
    char name[100];
    float weight;
};

void registerNewStudent(struct Student students[], int *totalStudents);//prototype
void loadData(struct Student students[], int *totalStudents);


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

void registerNewStudent(struct Student students[], int *totalStudents) {
    if(*totalStudents < 10) {
        printf("Enter student ID: \n");
        scanf("%d", &students[*totalStudents].id);

        printf("Enter student Name: \n");
        scanf("%s", students[*totalStudents].name);

        printf("Enter student Weight: \n");
        scanf("%f", &students[*totalStudents].weight);

        (*totalStudents)++;
        printf("New Student register suscessfuly\n");

        FILE *dataBase;
        dataBase = fopen("data.bin", "ab");

        fwrite(&students[*totalStudents -1], sizeof(struct Student), 1, dataBase);
        fclose(dataBase);

    } else {
        printf("Erro: There is no more space\n");
    }
}

void loadData(struct Student students[], int *totalStudents) {
    FILE *db = fopen("data.bin", "rb");

    if (db == NULL) {
        *totalStudents = 0;
        printf("The database is empty.\nStarting empty\n");
    }
    
    fseek(db, 0, SEEK_END);
    long totalBytes = ftell(db);

    int registersOnFile = totalBytes / sizeof(struct Student);
    
    if(registersOnFile > MAX_STUDENTS) {
        *totalStudents = MAX_STUDENTS;
        printf("Warning: The file has more registers than the limit.\nLoading just %d registers\n", MAX_STUDENTS);
    } else {
        *totalStudents = registersOnFile;
    }

    rewind(db);
    fread(students, sizeof(struct Student), *totalStudents, db);

    fclose(db);
    printf("System ready!\nThere are %d registers on database\n", *totalStudents);
}
