//※학생 3명 입력
// 학번  /  이름   / 국어 / 영어 / 수학
// 101  / 홍길동  / 90  /  90  /  95
// 102  / 윤길동  / 99  /  99  / 100
// 103  / 박낄뚱  / 95  /  75  /  55

//※출력
//정렬전
//101   홍길동  90  90  95  275 91.7
//102 ...
//103 ...
//정렬후
//102   윤길동  99  99  100 295 99.3
//101 ...
//103 ...

#include<stdio.h>

struct student
{
    int id;
    char name[20];
    int kor;
    int eng;
    int mat;
    int tot;
    double avg;
};

typedef struct student Student;

void PrintData(Student * ps);
void Sort(Student * arr);
void Swap(Student * st1, Student * st2);

int main(void){
    Student st[3];

    //input
    for(int i = 0; i < 3; ++i){
        printf("학번 : ");
        scanf("%d", &(st[i].id));
        printf("이름 : ");
        scanf("%s", &(st[i].name));
        printf("국어 영어 수학 : ");
        scanf("%d %d %d", &(st[i].kor), &(st[i].eng), &(st[i].mat));
        st[i].tot = st[i].kor + st[i].eng + st[i].mat;
        st[i].avg = (double)(st[i].tot) / 3.0;
    }

    puts("정렬전");
    for(int i = 0; i < 3; ++i){
        PrintData(&st[i]);
    }
    puts("");

    Sort(st);
    puts("정렬후");
    for(int i = 0; i < 3; ++i){
        PrintData(&st[i]);
    }
}

//102   윤길동  99  99  100 295 99.3
void PrintData(Student * ps){
    // Student temp = *ps;
    // printf("%d\t%s\t", temp.id, temp.name);
    // printf("%d\t%d\t%d\t", temp.kor, temp.eng, temp.mat);
    // printf("%d\t%.2lf\n", temp.tot, temp.avg);
    // printf("|%d\t|%s\t|%d\t|%d\t|%d\t|%d\t|%.2lf|\n", 
    //     temp.id, temp.name, temp.kor, temp.eng, temp.mat, temp.tot, temp.avg);
    // printf("%d\t%s\t", ps->id, ps->name);
    // printf("%d\t%d\t%d\t", ps->kor, ps->eng, ps->mat);
    // printf("%d\t%.2lf\n", ps->tot, ps->avg);
    
    printf("|%d\t|%s\t|%d\t|%d\t|%d\t|%d\t|%.2lf|\n", ps->id, ps->name, ps->kor, ps->eng, ps->mat, ps->tot, ps->avg);
}

void Swap(Student * st1, Student * st2){
    Student temp;
    temp = *st1; *st1 = *st2; *st2 = temp;
}

void Sort(Student * arr){
    for(int i = 0; i < 2; ++i){
        for(int j = 1; j < 3; ++j){
            if(arr[i].tot < arr[j].tot){
                Swap(&arr[i], &arr[j]);
            }
        }
    }
}