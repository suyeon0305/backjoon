// A+B - 5
/* 
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램
입력은 여러 개의 테스트 케이스로 구성.
입력의 마지막에는 0 두 개(0 두개 입력시 종료)
0 < a, b < 10
*/
// 시작: 11:31 종료: 11:35

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
    int a, b;

    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a + b == 0)
            break;
        else
            printf("%d\n", a+b);
    }
    
    

}

/*
while 무한 루프 사용
a, b가 0보다 크고 10보다 작기 때문에
탈출 조건을 a==0 && b==0으로 하지 않고
a+b==0으로 한번에 둠.

이때, 0 0 입력시 0으로 계산된 값이 나오지 않고 탈출해야하므로
먼저 써주거나, if else로 구분해줘야함.
아니면 0이 출력된 후 종료되므로 틀리게 될듯..?

파이썬은 vs코드에선 제대로 안된다고 하지만 잘되는거 맞음.
*/