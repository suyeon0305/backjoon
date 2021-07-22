//벌집
/* 벌집으로 이루어진 방이 있다. 
-> 1번 방에서 n번 방까지 지나가는 최소 방 개수 구하기*/
//시작: 14:52 종료:15:06
//재도전 시작:13:30 종료:13:48
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int y=1;

    scanf("%d", &n); 
    while (n>0)
    {
        if (n == 1)
        {
            break;
        }
        n=n-6*y;
        y++;
    }
    printf("%d", y);
}