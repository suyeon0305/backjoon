t = int(input(''))
l = []
for i in range(t):
    a, b = input().split()
    a = int(a)
    b = int(b)
    l.append(a+b)
for j in range(t):
    print(l[j])

'''
c언어도 마음만 먹으면 배열로 지정하여 
한번에 입력받고, 한번에 출력할 수 있지만
파이썬 리스트로 구현해보고 싶어서 리스트를 활용함.
'''