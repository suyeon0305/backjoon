#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int menu();
void enrolment();

int main()
{
    int mn;

    while (1)
    {
        mn = menu();
        switch (mn)
        {
        case 1:
            enrolment();
            break;
        case 2:
            /* code */
            break;
        case 4:
            quit();
            break;
        default:
            break;
        }
    }
}

int menu() {

    int num;

    printf("-------- MENU --------\n");
    printf("1. 학년별 필수 수강신청 과목\n");
    printf("2. 졸업 요건 충족 검사\n");
    printf("3. 추가예정(이수대체 등)\n");
    printf("4. 종료\n");

    scanf("%d", &num);
    return num;
}

void enrolment() {
    int grade;
    char yn;
    printf("학년 선택>> ");
    scanf("%d", &grade);
    switch (grade)
    {
    case 1:
        printf("\n<1-1>\n미분적분학과 벡터해석(1)\n컴퓨터프로그래밍\n컴퓨팅사고\n일반물리학 및 실험\n대학학문의 세계\n리더십개발\n기독교의 이해\n교양영어1\n");
        printf("\n<1-2>\n미분적분학과 벡터해석(2)\n자바프로그래밍\n데이터사이언스 입문\n리더십실습\n글쓰기\n교양영어2\n");
        printf("\n++대학교양(선택이수) 1, 2, 3, 4, 5, 6, 9 영역 중 최소 5개 영역에서 각각 1과목 이상 이수(총 15학점 이상 이수)\n");
        printf("교양은 1학년때 들어놔야 전공 시작하는 2학년부터 덜 힘들 수 있음.\n");
        printf("따라서 한 학기당 최소 하나씩은 대학교양을 수강하길 권함.\n");
        printf("대학교양 이수영역 자세히 살펴보기(y/n)>> ");
        scanf("%c", &yn);
        if (yn == 'y' || yn == 'Y')
            gyoyang();
        else
            break;
    case 2:
        printf("\n<2-1>\n공업수학1\n이산구조\n데이터구조론\n오픈소스sw와 리눅스\n객체 지향 프로그래밍\n논리회로설계\n회로이론\nRC진로설계\nSW영어\n");
        printf("\n<2-2>\nSW창의설계\n공업수학2\n알고리즘기초\n웹프로그래밍\n시스템프로그래밍\n컴퓨터구조론\nRC커리어개발\n");
        printf("\n++<2-1>이산구조와 <2-2>공업수학2는 둘 중 하나만 들으면 된다.(택1)\n");
        break;
    case 3:
        printf("\n<3-1>\nSW프로젝트 실전영어\n확률 및 랜덤 변수\n윈도우프로그래밍\n");
        printf("\n<3-2>\n오픈소스SW응용과제\nSW인턴십1/2\n모바일 프로그래밍\n병렬프로그래밍\n커리어디자인\n");
        break;
    case 4:
        printf("\n<4-1>\n학부연구(1)\n프로젝트 몰입 과제\n산학공동프로젝트\nSW인턴십3/4\n");
        printf("\n<4-2>\n학부연구(2)\nPBS2startup프로젝트\n융합 캡스톤 디자인\nSW장기인턴십1/2/3\nSW엔지니어소양세미나\n");
        break;
    default:
        break;
    }
}