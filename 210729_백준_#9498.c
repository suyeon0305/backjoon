// 시험성적
/* 
시험 점수를 입력받아 
90~100점: A/ 80~89: B/ 70~79: C/ 60~69: D/ 나머지 F 출력
*/
// 시작: 14:28 종료: 14:32

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
    int score;
    char grade;

    scanf("%d", &score);
    switch (score/10)
    {
    case 10:
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    default:
        grade = 'F'; 
        break;
    }
    printf("%c", grade);
}

/*
이문제도 쉬웠음.
오랜만에 switch 문을 사용했다는 것에 의의.
*/