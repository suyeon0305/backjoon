// A+B -7
/* 
두 정수 A와 B를 입력받은 다음, 
A+B를 출력하는 프로그램
첫째 줄에 테스트 케이스의 개수 T
각 테스트 케이스마다 "Case #x: "를 출력한 다음, A+B를 출력
*/
// 시작: 12:32 종료: 12:34

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
    int t, a, b;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i + 1, a + b);
    }
}

/*
출력시, 어디에 어떤 변수가 들어가야할지만 주의하면 됨.
*/