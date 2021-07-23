//달팽이는 올라가고 싶다.
/* 
달팽이가 v미터인 나무 먁대 올라감.
낮에 a미터 올라감. 밤에 자는 동안 b미터 미끄러짐.
정상에 올라가면 미끄러지지 않음.
달팽이가 나무막대 모두 올라가려면 며칠 걸리는가?
*/
//시작: 8:25 종료: 8:35
//재도전: 시작8:41 종료:9:21

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
    int a, b, v;
    int day=0;

    scanf("%d %d %d", &a, &b, &v);
    day = (v-b-1)/(a-b) +1;

    printf("%d", day);
}

 /*시간초과
int main() {
    int a, b, v;
    int day=0;

    scanf("%d %d %d", &a, &b, &v);
    while (v>0)
    {
        day++;
        v=v-a;
        if (v<=0)
            break;
        else
            v=v+b;
    }
    printf("%d", day);
}
*/
/*두번째시도.. 
int main() {
    int a, b, v;
    int day=0;

    scanf("%d %d %d", &a, &b, &v);
    if ((v-a)>=(a-b))
        day = (v - a) / (a - b) + 1;
    else
        day = v/a+1;

    printf("%d", (int)day);
}
*/
/*
엥 이게 정답률이 27퍼센트지? 라고 생각함.
근데 시간제한 조건 때문에 반복문 사용하면 안됨.
여기서부터 멘탈 나가기 시작.
문제를 이해하려기보다 예제에 끼워맞추는 식이었음.
'문제의 원리'를 이해하고 코드를 짜자.
결국 구글링을 통해 하나 얻어갔다.//https://yahohococo.tistory.com/28
세상 사람들 참 똑똑하다.
*/
