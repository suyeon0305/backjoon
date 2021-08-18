// OX퀴즈
/* 
문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수
<예시>
"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점
OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성
*/
// 시작(8/16): 23:47 종료: 00:00

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
    int t, cnt=0, tot=0;
    char ox[80] = {0,};

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        cnt = 0;
        tot = 0;
        scanf("%s", ox);
        for (int j = 0; ox[j] != '\0' ; j++)
        {
            if (ox[j] == 'X')
            {
                cnt = 0;
                ox[j]++;
                continue;
            }
            else if (ox[j] == '\0')
            {
                break;
            }
            else
            {
                cnt++;
                tot += cnt;
                ox[j]++;
            }
        }
        printf("%d\n", tot);
    }

    
}



/*
한 삼일전에 이문제를 처음 풀었을 때 엥??? 어떻게 해야하지?? 생각했다.
체계적으로 생각한게 아니라 '또' 무턱대고 들이댄것이다.

하지만 오늘 풀때는 o의 경우와 x의 경우를 차분히 생각해보았다.
o는 점수가 축적되지만, x는 점수가 끊긴다. 즉 x를 약간의 막대기로 생각하고 끊어준다고 생각했다.
그래서 널문자('\0')가 입력되기 전까지 ox를 판정하여 위와같이 코드를 짰다.
여기서 cnt와 tot의 초기화를 주의해야한다는 것을 명심하자.

*/