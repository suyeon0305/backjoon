//사분면 고르기
/* 
"Quadrant n"은 "제n사분면"
점의 좌표를 입력받아 그 점이 어느 사분면에 속하는지 알아내는 프로그램
단, x좌표와 y좌표는 모두 양수나 음수라고 가정
*/
// 시작: 22:40 종료: 22:43
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x>0 && y>0)
        printf("1\n");
    else if (x<0 && y>0)
        printf("2\n");
    else if (x<0 && y<0)
        printf("3\n");
    else
        printf("4\n");
    
}

/*
기본적인 사분면에 대한 이해만 있다면
조건문으로 쉽게 풀 수 있는 문제
*/