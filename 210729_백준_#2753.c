// 윤년
/* 
연도가 주어졌을 때, 윤년이면 1, 아니면 0
윤년: 연도가 4의 배수 && 100의 배수가 아닐때 or 400의 배수일 때
*/
// 시작: 14:28 종료: 14:32

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
    int year;

    scanf("%d", &year);
    if (year%4==0&&year%100!=0 || year%400==0)
        printf("1");
    else
        printf("0");
    
}

/*
이문제도 쉬웠음.
오랜만에 switch 문을 사용했다는 것에 의의.
*/