// 두 수 비교하기
/* 
두 정수 a, b를 비교하는 프로그램
*/
// 시작:14:18  종료: 14:22

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

void compare(int a, int b);

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    compare(a, b);
}

void compare(int a, int b) {
    if (a>b)
        printf(">\n");
    else if (a<b)
        printf("<\n");
    else
        printf("==\n");
}

/*
쉬운 문제
오랜만에 c언어 함수를 만들어 사용함.
*/