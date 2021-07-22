//분수찾기
/* 
무한히 큰 배열에 분수들이 적혀있다.
순서는 1/1, 1/2, 2/1, 3/1, 2/2 ... 지그재그 순서
x가 주어졌을 때, x번째 분수를 구하는 프로그램
*/
//시작: 22:40 종료:23:22

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
    int x,r;
    int cnt=1;

    scanf("%d", &x);
    while(x>0) {
        r=x;
        x = x-cnt;
        cnt++;
    }
    if (cnt%2==0)
        printf("%d/%d", cnt-r, r);
    else 
        printf("%d/%d", r, cnt-r);
}
/*
규칙 찾기 -> 문제에 적용할만한 규칙 찾는게 너무 힘들었음.
결국 남친 도움 받음.
짝수, 홀수 조건도 제대로 확립이 안되어있어서 계속 헤맴.
한번 볼때 제대로 보자.
어중이떠중이가 되지말자.
*/