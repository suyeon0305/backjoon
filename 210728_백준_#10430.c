// 나머지
/* 
(A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
(A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
세 수 A, B, C가 주어졌을 때, 
위의 네 가지 값을 구하는 프로그램
*/
// 시작: 15:58 종료: 16:02

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (a+b)%c);
    printf("%d\n", ((a % c) + (b % c)) % c);
    printf("%d\n", (a*b) % c);
    printf("%d\n", ((a % c) * (b % c)) % c);
}

/*
코드 구현은 어렵지 않았으나,
수식적으로 의미가 있었던 문제.
나머지의 덧셈과 곱셈의 분배법칙..? 같은 느낌이었다.
조금 다른 것은 분배 후에도 %c를 따로 해줘야한다는 것..!
알아두자.
*/