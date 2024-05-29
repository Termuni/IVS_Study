#include<stdio.h>

struct vision
{
    double left;
    double right;
};

typedef struct vision Vision;       //struct vision -> Vision 으로 줄여서 사용 가능
                                    //보통 struct는 소문자로, type이름은 대문자로 사용

//시력의 좌/우 전환
Vision Exchange(Vision robot);

int main(void){
    Vision robot;
    printf("좌/우 시력 >> ");
    scanf("%lf %lf", &robot.left, &robot.right);
    printf("입력된 시력 \t| 좌 : %.1lf, 우 : %.1lf\n", robot.left, robot.right);
    robot = Exchange(robot);
    printf("좌우 바뀐 시력 \t| 좌 : %.1lf, 우 : %.1lf\n", robot.left, robot.right);
}   

Vision Exchange(Vision robot){
    //매개변수 robot의 left와 right exchange
    double temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}