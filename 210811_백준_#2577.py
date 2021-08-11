cnt = 0
arr = [0 for i in range(10)]

a = int(input())
b = int(input())
c = int(input())

n = a*b*c
backup = n

while backup>0:
    backup = backup//10
    cnt += 1

for i in range(cnt):
    if n%10 == 0:
        arr[0] += 1
    elif n%10 == 1:
        arr[1] += 1
    elif n%10 == 2:
        arr[2] += 1
    elif n%10 == 3:
        arr[3] += 1
    elif n%10 == 4:
        arr[4] += 1
    elif n%10 == 5:
        arr[5] += 1
    elif n%10 == 6:
        arr[6] += 1
    elif n%10 == 7:
        arr[7] += 1
    elif n%10 == 8:
        arr[8] += 1
    elif n%10 == 9:
        arr[9] += 1
    elif n%10 == 10:
        arr[10] += 1

    n = n//10

for i in range(10):
    print(arr[i])

'''
내가 이렇게 개고생해서 코드를 만들었는데

#ghwns82 이분이 내 코드길이의 1/7로 작성했다..ㅋㅋ

A = int(input())*int(input())*int(input())

for i in range(10):
    print(str(A).count(str(i)))

count를 생각못했고, 이게 된다고도 생각못했다.. 진짜 천재인걸까..?

count는 문자열에서 쓰이는 메소드다.
문자열 내부에서 특정 문자, 혹은 문자열이 포함되어있는지 계산해서 반환해준다.(리스트도 마찬가지)
.count(self, x, _start, _end)
- 대소문자 구분함.
- 찾을 x엔 문자 하나든 문자열이든 상관 x
- start와 end에 아무것도 넣지 않으면 처음부터 끝까지 탐색
- 찾는 x의 범위는 start <= x < end(start는 포함, end는 미포함)
'''