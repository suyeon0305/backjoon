//빠른 A+B
/* 
반복문(for문) 문제를 풀기 전에 주의해야 할 점.
입출력 방식이 느리면 여러 줄을 입력받거나 출력할때 시간초과가 날 수 있다.

C언어가 아닌 다른 언어들을 사용할 때 이 문제에 대한 해결은
백준 https://www.acmicpc.net/problem/15552
여기에 자세히 나와있으므로 참고하자.

첫 줄에 Test case 주어지는데, 이때 T는 최대 1,000,000 이다.

c언어는 사실 상관이 없으므로 그대로 사용한다.
*/
// 시작: 14:00 종료: 14:05
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
    int t, a, b;
    int sum = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
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