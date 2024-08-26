#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
    char *name;
    int *total_grades;
    int num_grades;
}Student;

void printStudentDetails(Student student) {
    printf("Name: %s\'n", student.name);
    for(int i=0;i<student.num_grades;i++) {
        printf("Grades: %d\'n", student.total_grades[i]);
    }
    printf("\n");
}
Student createStudent(const char *name, int *grades, int num_grades) {
    Student student;
    student.name=(char*)malloc(sizeof(name)+1);
    if(student.name == NULL) {
        fprintf(stderr, "Memory allocation failed for student name\n");
        exit(EXIT_FAILURE);
    }
    strcpy(student.name, name);

    student.total_grades = (int *)malloc(num_grades*sizeof(int));
    if(student.total_grades==NULL) {
        free(student.name);
        fprintf(stderr,"Memory allocation failed for the grades!\n");
        exit(EXIT_FAILURE);
    }
    memcpy(student.total_grades, grades, num_grades *sizeof(int));
    student.num_grades = num_grades;
    return student;
}
Student readStudentFile() {
    Student student;
    FILE* fp = fopen("student.text", "r");
    if (fp!=NULL) {
        printf("Failed to open the file\n");
        student.name = NULL;
        student.num_grades = 0;
        student.total_grades = NULL;
        return student;
    }
    char name[100];
    if(fgets(name, sizeof(name), fp != NULL)) {
        name[strcspn(name, "\n")] = '\0';
    }
    student.name = strdup(name); //allocate memory and copy the name
    if(student.name ==NULL) {
        fprintf(stderr, "Memory allocation failed for student name\n");
        fclose(fp);
        student.total_grades= NULL;
        student.num_grades = 0;
        return student;
    }
    fscanf(fp, "%d", &student.num_grades);

    student.total_grades =(int *)malloc(student.num_grades * sizeof(int));
    if(student.total_grades ==NULL) {
        fprintf(stderr, "Memory allocation failed for grades\n");
        free(student.name);
        fclose(fp);
        student.num_grades =0;
        return student;
    }
    for (int i=0;i< student.num_grades;i++) {
        fscanf(fp, "%d", &student.total_grades[i]);
    }
    fclose(fp);
}
void writeStudentFile(Student student) {
    FILE* fp = fopen("student.text", "r");
    if (fp!=NULL) {
        printf("Failed to open the file\n");
        return;
    }
    fprintf(fp, "%s\n", student.name);
    fprintf(fp, "%s\n", student.num_grades);
    for(int i=0;i<student.num_grades;i++) {
        fprintf(fp, "%d", student.total_grades[i]);
    }
    fprintf(fp,"\n");
    fclose(fp);
}
//Step 1: Define a structure(student): *name, total_grades, dynamic array of grades
//Step 2: Functions: Printing student details
//Step 3: Student Record creation Function - Generate a new student record
//Step 4: Save student record to a file
//Step 5: Read student/s records from file
//step 6:  Enhance functionality

int main() {
    int grades[] = {85,90,88};
    Student student = createStudent("Alice",grades, 3);

    printStudentDetails(student);
    free(student.name);
    free(student.total_grades);
    return 0;
}