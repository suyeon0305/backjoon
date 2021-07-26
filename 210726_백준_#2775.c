//부녀회장이 될테야
/* 
아파트의 거주조건
"a층의 b호에 살려면 자신의 아래(a-1)층의 1호부터 b호까지 사람들의 수의 합만큼 데려와 살아야한다."
아파트에 비어있는 집은 없고 모든 거주민들이 이 조건을 지킨다.
k층에 n호에는 몇명이 살고 있을까?
입력 : t(test case), k, n 출력: 몇 명?
*/
//시작: 10:38 종료: 11:12 - 24

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
    int k, n, t;
    int apt[15][15]={0,};

    for (int i = 0; i < 1; i++)
    {
        for (int j = 1; j<=14; j++)
        {
            apt[i][j] = j;
        }
    }

    for (int i = 1; i <= 14; i++)
    {
        for (int j = 1; j <= 14; j++)
        {
            if (j==1)
            {
                apt[i][j] = 1;
            }
            else
                apt[i][j] = apt[i-1][j] + apt[i][j-1];
        }
    }
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &k);
        scanf("%d", &n);
        printf("%d\n", apt[k][n]);
    }

}
/*
이방법으로 풀어도 되나 고민을 했지만 대부분 이방법으로 풀었더라.
내방식에 의심하지 말고, 확실하기만 하다면 시도하자.
범위 설정 틀리지 말고, 배열 범위와 초기화에 주의하자.
*/