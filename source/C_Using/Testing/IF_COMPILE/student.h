#define FEATURE_SECOND_STUDENT

#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[20];
    unsigned int id;
    unsigned int math_score;
    unsigned int english_score;
} Student;

void print_student_name(const char *name);
int calculate_student_age(int birth_year);

double calculateAverage(int math, int english){
    return (double)(math + english) / 2;
}

void printStudentInfo(Student * student){
    printf("Name: %s\n", student->name);
    printf("ID: %d\n", student->id);
    printf("Math Score: %d\n", student->math_score);
    printf("English Score: %d\n", student->english_score);
    printf("Average Score: %.2lf", calculateAverage(student->math_score, student->english_score));
}

void printSecondStudentInfo(Student * student){
    printStudentInfo(student);
}