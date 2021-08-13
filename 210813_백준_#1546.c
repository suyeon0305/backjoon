// 평균
/* 
세준이는 자기 점수 중에 최댓값을 골랐다. 
이 값을 M이라고 한다. 
그리고 모든 점수를 점수/M*100으로 고쳤다.
위의 방법대로 새로 계산했을 때, 새로운 평균을 구하는 프로그램
*/
// 시작: 13:10 종료: 13:32

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
    int n, score[1000];
    double M=0, avg=0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
        if (score[i] >= M)
        {
            M = score[i];
        }
        avg += (score[i]);
    }
    avg = avg/M*100/n;
    printf("%lf", avg);
}



/*
나름 잘풀었는데 마지막 avg를 왜때문인지 반복문안에 넣어놔서 좀 더 시간이 걸렸다..
이래서 코딩할땐 방심하면 안된다. 
하나 잘못하면 발견하는 시간이 기하급수적으로 늘어난다.

모든 점수를 점수/M*100하므로 인수분해 느낌으로다가 한번에 계산했다.
*/