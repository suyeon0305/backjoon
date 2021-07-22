//손익분기점
/* 고정비용 A, 가변비용 B, 판매비용 C 
-> 총 비용(A+B) < 총 수입(C) 인 손익분기점이 생기는 판매량 출력 */
// 시작: 14:10 종료 14:31
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
    int A=0, B=0, C=0;
    int cnt=0;

    scanf("%d %d %d", &A, &B, &C);
    if (A > 0 && B > 0 && C > 0 && A <= 2100000000 && B <= 2100000000 && C <= 2100000000)
    {
        if (B>=C)
        {
            printf("-1");
            return 0;
        }
        else {
            cnt = A / (C - B) +1;
            printf("%d", cnt);
        }
        
    }
}
/* 이건 왜 2100000000 9 10 입력하면 제대로 안나올까?
do
{
    cnt++;
} while (A + B * cnt >= C * cnt);
printf("%d", cnt);

*/