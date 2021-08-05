n1 = int(input(''))
n2 = int(input(''))
ans=[0 for i in range(4)]

for i in range(3): 
    ans[i] = n1 * (n2%10)
    n2 = n2 // 10
ans[3] = int(ans[0]) + int(ans[1])*10 + int(ans[2])*100
for j in range(4):
    print(ans[j])

'''
ans=[0 for i in range(4)]
에서 알 수 있듯이
크기가 정해진 리스트를 만들고, 모두 0으로 초기화 하고 싶다면

list = [0 for i in range(n)]
-> 크기가 n이고, 모두 0으로 초기화된 리스트

를 만들수 있다.
'''