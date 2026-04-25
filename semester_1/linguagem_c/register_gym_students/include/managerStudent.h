#ifndef MANAGERSTUDENT_H
#define MANAGERSTUDENT_H

#define MAX_STUDENTS 100

struct Student { //before be used
    int id;
    char name[100];
    float weight;
};

void registerNewStudent(struct Student students[], int *totalStudents);
void loadData(struct Student students[], int *totalStudents);
#endif // REGISTERNEWSTUDENT_H