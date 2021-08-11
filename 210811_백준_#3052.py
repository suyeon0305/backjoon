arr=[0 for i in range(10)]

for i in range(10):
    arr[i] = (int(input())%42)

print(len(list(set(arr))))

'''
와 최근에 파이썬으로 스스로 푼 문제중에 제일 뿌듯한 문제
arr배열을 10개 자리 0으로 초기화하고, 각 입력값을 42로 나눈 나머지를 다시 저장시켰다.
그 후, set을 쓰면 중복이 없어진다는 점에 착안하여, set을 해준 후 그 길이(서로 다른 것 개수)를 반환하면 된다.

#cjy11230 의 코드
l = list()
for i in range(10) :
    a = int(input())
    a %= 42
    if a not in l :
        l.append(a)
        
print(len(l))

이사람도 짧게 코딩하여 가져와봤다.
if a not in l을 써서 l 리스트에 값이 없으면 넣어주는 방식인데 이또한 기발했다.
l 리스트의 길이를 반환하는 점은 동일하다.
'''