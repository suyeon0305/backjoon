t = int(input(''))

for i in range(t):
    l = input()
    cnt = 0
    tot = 0
    for j in l:
        if j == 'X':
            cnt = 0
        else:
            cnt += 1
            tot += cnt

print(tot)
    