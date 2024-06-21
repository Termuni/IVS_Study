#include "student.h"
#include <stdio.h>
#include <string.h>

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