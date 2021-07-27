//설탕 배달
/* 
설탕 봉지 3kg, 5kg 두 종류
최대한 적은 봉지로 주어진 nkg의 설탕을 배달
예) 18kg -> 3kg 6개 (x), 5kg 3개+3kg 1개 (o)
입력: n(kg), 출력: 봉지 개수// 만약 정확히 nkg이 안된다면 -1출력
*/
//시작: 10:23 종료: 11:06
//재시도: 13:44 종료:14:10

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int cnt=0;

    scanf("%d", &n);

    while (1)
    {
        if (n % 5 == 0)
        {
            cnt += n / 5;
            printf("%d", cnt);
            break;
        }
        n = n - 3;
        cnt++;

        if (n < 0)
        {
            cnt--;
            printf("-1");
            break;
        }
    }
}

/* 첫번째 시도: 난장판
int main() {
    int n;
    int kg3 = 0, kg5 = 0;

    scanf("%d", &n);
    switch (n)
    {
    case 5:
    case 8:
    case 11:
    case 14:
    case 17:
        n -= 5;
        kg5++;
        break;
    case 10:
    case 13:
    case 16:
    case 19:
    case 22:
        n -= 10;
        kg5 += 2;
        break;
    default:
        break;
    }
    while (1)
    {
        if (n == 0 || n==2)
        {
            printf("%d", kg3 + kg5);
            break;
        }
        n -= 3;
        kg3++;
        
        if (n < 0)
        {
            kg3--;
            printf("-1");
            break;
        }
        else if (kg3 % 5 == 0)
        {
            kg5 = (kg3 / 5)*3;
            kg3 = 0;
            continue;
        }
    }
}
*/

/*
지금 메인이 두번째 시도: 출처-https://gabii.tistory.com/entry/BaekJoonC-%EB%B0%B1%EC%A4%80-2839%EB%B2%88-%EC%84%A4%ED%83%95%EB%B0%B0%EB%8B%AC
결국,, 하.. 수학이 부족한가..?
수학 중에서도 지금 계속 푸는 유형들은 케이스 분류가 엄청 중요한데 그걸 못하는듯.
차근차근 생각하고 접근하자.
할수있다!!
*/