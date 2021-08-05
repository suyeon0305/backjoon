// 기찍 N
/* 
자연수 N이 주어졌을 때, 
N부터 1까지 한 줄에 하나씩 출력하는 프로그램
*/
// 시작: 12:25 종료: 12:28

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = n; i > 0; i--)
        printf("%d\n", i);
}

/*
간단한 문제
*/