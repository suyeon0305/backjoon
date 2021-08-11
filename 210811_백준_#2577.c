// 숫자의 개수
/* 
세 개의 자연수 A, B, C가 주어질 때 
A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램
*/
// 시작: 10:54 종료: 10:59~11:15

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
    int a, b, c, n=0;
    int arr[10] = {0,};

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    n = a*b*c;
    while (n>0)
    {
        for (int i = 0; i < 10; i++)
        {
            if (i == (n % 10))
            {
                arr[i]++;
            }
        }
        n = n/10;
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%d\n", arr[j]);
    }
}


/*
배열문제라고 다 배열로 만들려고 하지 말고 생각좀 하고 짜자..!
수고했다..

*/