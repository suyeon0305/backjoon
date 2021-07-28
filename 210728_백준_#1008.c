// A/B
/* 
두 정수 A와 B를 입력받아, A/B를 출력
단, 0< A,B < 10
출력: 절대오차 또는 상대오차가 10^(-9)이하면 정답
*/
// 시작: 15:38 종료: 15:43

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
    int a, b;
    double div=0;
    
    scanf("%d %d", &a, &b);
    div = (double)a/(double)b;
    printf("%lf", div);
}

/*
오차가 10^(-9) 이하여야하므로 
double 형으로 바꿔주어 .9lf로 출력해야함.
*/