# 참고한 코드  백준 아이디 #leaddwk
import sys

n = int(sys.stdin.readline())
for i in range(n):
    print(n-i)

# 15552번과 달리 반복문 안에서 입력을 받는 게 아니라서
# input을 쓰든, sys.stdin.readline()을 쓰든 걸리는 시간에는 차이가 없다.

'''
내 첫 코드
n = int(input(''))

for i in range(n, 0, -1):
    print(i)
'''