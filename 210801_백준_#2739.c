// 구구단
/* 
N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성
1<N<9
*/
// 시작: 22:18 종료: 22:20

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>


int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    
}


/*
반복문의 생기본 문제 = 구구단 출력하기
*/