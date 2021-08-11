// 최댓값
/* 
9개의 서로 다른 자연수가 주어질 때
이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램
*/
// 시작: 10:54 종료: 10:59~11:15
 /*
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
    int arr[9];
    int max = 0, num = 0;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
            num = i + 1;
        }
    }
    printf("%d\n%d", max, num);
}
*/

//문제의 코드

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
    int arr[9] = {0, };
    int max = 0, num = 0;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int j = 0; j < 9; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
            num = j+1;
        }
    }
    printf("%d\n", max);
    printf("%d\n", num);
}


/*
쉽게 풀었다고 생각했는데 틀렸다고 떠서 멘붕이었다.
아니 저 코드가 어디가 틀린걸까.
결국 다른 사람들 코드를 봤는데 별다른 건 없었지만
좀 더 깔끔하게 수정했더니 됐다.
*/