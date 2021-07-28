// 사칙연산
/* 
두 자연수 A와 B를 입력받음
덧셈, 뺄셈, 곱셈, 나눗셈의 몫, 나머지를 차례대로 출력
단, 0< A,B < 10000
*/
// 시작: 15:52 종료: 15:54

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);
}

/*
지금까지 문제 중에 가장 쉽게 푼 문제
행복했다,,
*/