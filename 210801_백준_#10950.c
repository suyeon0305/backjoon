// A+B-3
/* 
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램
단, 첫째줄에 Test Case의 개수 t가 주어진다.
*/
// 시작: 22:26 종료: 22:29

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
    int t, a, b;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    
}

/*
test case 조건을 통해 반복문을 사용하게 함.
여기서 i<t 인 부분은, size 로서 지정하여 함수를 활용하는 것을 익히 봐왔음.
나중에 이것도 응용해 볼 것.
*/