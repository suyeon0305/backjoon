n, x = map(int, input().split())
a = list(map(int, input().split()))

for i in range(n):
    if a[i] < x:
        print(a[i], end=" ")

'''
참고 코드: https://yongku.tistory.com/entry/%EB%B0%B1%EC%A4%80-10871%EB%B2%88-X%EB%B3%B4%EB%8B%A4-%EC%9E%91%EC%9D%80-%EC%88%98-%ED%8C%8C%EC%9D%B4%EC%8D%ACPython

문제에서 n을 10 받으면 a도 무조건 10을 입력받도록 하는게 아니라
내가 열 개를 입력하면 되는거다. 문제 조건에 없기 때문이다.
그리고 엔터값 없이 공백으로만 출력하려면
print(a[i], end=" ")
이런식으로 end = " ") 이렇게 하면 된다.

비슷한 유형으로 sep 이 있는데, 얘는
예를들어 전화번호를 출력할때
print('1234', '5678', sep = "-")
이면
1234-5678 이 출력된다. 즉 사이에 넣는 거다.
end는 끝마다 넣는거고.
'''