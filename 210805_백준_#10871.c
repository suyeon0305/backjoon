// X보다 작은 수
/* 
정수 N개로 이루어진 수열 A와 정수 X가 주어진다
이때, A에서 X보다 작은 수를 모두 출력하는 프로그램
*/
// 시작: 16:00 종료: 15:41

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

//두번째 시도
int main()
{
    int n, x, a;

    scanf("%d %d", &n, &x);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a < x)
        {
            printf("%d ", a);
        }
    }
}

/*
//첫 번째 시도
int main() {
    int n, x;
    int a[10000] = {0, };

    scanf("%d %d", &n, &x);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < x)
        {
            printf("%d", a[i]);
        }
    }
}
*/

/*
항상 c언어로 먼저 풀고 파이썬을 풀었으나
이문제는 처음으로 파이썬 먼저 풀었다.

사실 c언어를 시도했었는데 아래 첫번째 시도처럼
수열을 배열로 받으려 했다. 근데 에러가 났다.
그 이유를 자세히 설명해둔 백준 질문이 있다.
https://www.acmicpc.net/board/view/47440

그러므로, 꼭 배열로 한번에 받을 필요가 없다는 것이다.

문제 조건을 잘 이해하고, 확실하지 않다면 배우고, 확실하게 하고 가야한다.
*/