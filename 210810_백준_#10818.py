n = int(input())
num = [0 for i in range(n)]
num = list(map(int, input(). split()))
#print(min(num), max(num))
num.sort()
print(num[0], num[-1])

'''
파이썬은 내장함수에 min, max가 있는데
min(x), max(y)에서 x, y는 iterable 한 자료형, 
즉 반복이 가능한 데이터 타입(member를 하나씩 반환할수 있는)을 넣어야 한다.
이런 자료형으로는 문자열, 리스트, 튜플 등이 있다.
'''