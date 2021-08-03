import sys

t = int(sys.stdin.readline())

for i in range(t):
    a, b = map(int, sys.stdin.readline().split())
    print(a+b)

'''
파이썬에서는 input 대신
sys.stdin.readline을 사용할 수 있다.
-> 사실 input으로 생각하고 그 자리에 
sys.stdin.readline()를 넣어준다고 생각하니까 쉽다.
input 대신 얘를 쓰는 이유는 
한 두줄 입력받는 문제들과 다르게, 
반복문으로 여러줄을 입력 받아야 할 때는 
input()으로 입력 받는다면 시간초과가 발생할 수 있기 때문이다.
대표적인 예시가 바로 이문제다.
#참고 https://velog.io/@yeseolee/Python-%ED%8C%8C%EC%9D%B4%EC%8D%AC-%EC%9E%85%EB%A0%A5-%EC%A0%95%EB%A6%ACsys.stdin.readline

단, 이때는 맨 끝의 개행문자(\0)까지 입력받으므로
문자열을 저장하고 싶을 경우 .rstrip을 해주거나
그렇지 않을 경우 int 형으로 변환할 수도 있다.

또한 이름이 길기 때문에 
맨처음에 input = sys.stdin.readline 으로 두고
코드를 짜도 무방하다.
'''

'''
map 함수
파이썬에 있는 map 함수는 백준의 다른 사람 코드를 보며 처음 접했다.
두개의 정수를 받을 때, 나는 보통
a, b = input().split()
a = int(a)
b = int(b)

이렇게 세줄을 사용하였는데 다른 사람은

a, b = map(int, input().split())

이렇게 한 줄로 끝내버리는 것이었다.
그리하여 언젠가 map 사용을 익히리라 마음 먹었는데
사실 제대로 배우진 않아서 대충 익힌 바로는
map은 리스트의 요소를 지정된 함수로 처리하되,
주로 "여러 개의 데이터를 한번에 다른 형태로" 바꾸기 위해 사용한다고 한다.
'''