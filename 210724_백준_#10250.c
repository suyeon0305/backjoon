//ACM 호텔
/* 
손님은 호텔 정문으로부터 걸어서 가장 짧은 거리에 있는 방을 선호
N번째 손님에게 배정될 방 번호를 계산하는 프로그램
test data 를 입력받고 호텔의 층수(H), 각 층의 방수(W), 몇번째 손님(N)인지 입력받음
그 후 test data 만큼 손님 방 배정
*/
//시작: 12:00 종료: 8:35
//재도전: 시작8:41 종료:9:21

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
/* solve 1
int main() {
    int t, h, w, n;
    int room=0, x=0, y=0;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &h, &w, &n);
        if (n%h==0)
        {
            x=n/h;
            y=h;
            room=y*100+x;
            printf("%d\n", room);
        }
        else
        {
            x = n / h + 1;
            y = n % h;
            room = y * 100 + x;
            printf("%d\n", room);
        }
    }
}
*/
//solve 2
// 입력한번에 받고 출력 한번에 하려고 배열썼는데 이상함. 왜그럴까?
int main()
{
    int t, h, w, n;
    int x = 0, y = 0;
    int room[100] = {
        0,
    };

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &h, &w, &n);
        if(n%h==0)
        {
            x=n/h;
            y=h;
        }
        else
        {
            x = n / h + 1;
            y = n % h;
        }
        room[i] = y * 100 + x;
    }
    for (int j = 0; j < t; j++)
    {
        printf("%d\n", room[j]);
    }
}

/*
여러모로 화가 많이 났던 문제
제대로 작동하고, 예제도 출력 잘 되는데 자꾸 틀렸다고 해서 뭐가 문제인지 몰랐는데
백준 질문 게시판을 통해 (\n) 엔터값을 입력해줘야함을 깨달았다.
엔터는 필수다. 제발. 습관화하자.
(남자친구 코드도 나랑 거의 똑같았는데 나만 틀려서 너무 억울했었다.)

배열값 때는 엔터값은 제대로 넣었으나 조건이 부족했다.
n%h == 0 일때를 고려하지 못했던것.
처음에 배열로 했었다가 solve 1 로 고쳤었는데 배열도 조건 추가하니까 맞더라.
*/