//N 찍기
/* 
자연수 N이 주어졌을 때, 
1부터 N까지 한 줄에 하나씩 출력하는 프로그램
*/
// 시작: 14:47 종료: 14:
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", i+1);
    }
    
}

/*
사실 이문제는 c언어에서는 어떤 공부도 할 수 없다.
그 이유는 c언어에서 사용하는
scanf/printf는 충분히 빠르기 때문이다.
*참고*
https://www.acmicpc.net/board/view/22716

파이썬 부분에 자세히 서술해두겠다.
*/