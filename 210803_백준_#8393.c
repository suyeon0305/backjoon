//합
/* 
n 이 주어졌을 때, 1부터 n까지 합 구하는 프로그램
*/
// 시작: 10:34 종료: 10:37
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int tot=0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        tot += i;
    printf("%d", tot);
}

/*
합을 연속적으로 한다는 건,
기존 값에서 쌓는다...? 는 느낌으로 구현해줄것
*/