c = int(input())

for i in range(c):
    cnt = 0
    l = list(map(int, input().split()))
    n = l.pop(0)
    avg = sum(l)/n
    for j in l:
        if j > avg:
            cnt+=1
    print(f'{(cnt/n)*100:.3f}%')
