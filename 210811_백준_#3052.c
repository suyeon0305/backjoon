// 나머지
/* 
수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 
그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램
*/
// 시작: 14:32 종료: 14:59

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
    int arr[10] = {0,};
    int rest[42] = {0,};
    int cnt=0;
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        arr[i] %= 42;
        for (int j = 0; j < 42; j++)
        {
            if (arr[i] == j)
            {
                rest[j]++;
            }
        }
    }
    for (int i = 0; i < 42; i++)
    {
        if (rest[i] != 0)
            cnt++;
    }
    printf("%d\n", cnt);
}


/*
배열문제라고 다 배열로 만들려고 하지 말고 생각좀 하고 짜자..!
수고했다..

*/