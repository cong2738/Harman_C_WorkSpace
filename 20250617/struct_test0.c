#include <stdio.h>
#include <string.h>

typedef struct student
{
    int num;
    double grade;
    char name[4];
    char* introduce;
} student;

int main(void)
{
    student s1;
    s1.num = 2;
    s1.grade = 2.7;
    strcpy(s1.name, "박호윤");
    strcpy(s1.introduce, "안녕하세요.");
    printf("학번: %d\n", s1.num);
    printf("학점: %.1lf\n", s1.grade);
    printf("이름: %s\n", s1.name);
    printf("소개: %s\n", s1.introduce);
    return 0;
}