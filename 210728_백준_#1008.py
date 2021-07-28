# A/B

#두 정수 A와 B를 입력받아, A나누기B를 출력
# 단, 0< A,B < 10
#출력: 절대오차 또는 상대오차가 10^(-9)이하면 정답

# 시작: 15:43 종료: 15:47

a, b = input().split()

a = float(a) 
b = float(b)

print(a/b)


'''파이썬은 float형으로도 충분함'''
