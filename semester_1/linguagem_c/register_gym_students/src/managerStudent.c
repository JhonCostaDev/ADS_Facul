#include <stdio.h>
#include "managerStudent.h"

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
        dataBase = fopen("data/data.bin", "ab");

        fwrite(&students[*totalStudents -1], sizeof(struct Student), 1, dataBase);
        fclose(dataBase);

    } else {
        printf("Erro: There is no more space\n");
    }
}

void loadData(struct Student students[], int *totalStudents) {
    FILE *db = fopen("data/data.bin", "rb");

    if (db == NULL) {
        *totalStudents = 0;
        printf("The database is empty.\nStarting empty\n");
        return;
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
