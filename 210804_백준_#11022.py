import sys

for i in range(int(sys.stdin.readline())):
    a, b = map(int, sys.stdin.readline().split())
    print(f'Case #{i+1}: {a} + {b} = {a+b}')

'''
15552번과 같이 반복문 안에서 입력을 받는 것!
따라서 input보다 sys.stdin.readline()을 쓰는 것이 시간 효율이 더 좋다.
'''
