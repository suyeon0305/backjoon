score = []
n = int(input(''))
for i in range(n):
    a = int(input(''))
    score.append(a)
M = max(score)
avg = (((sum(score))/M*100))/n
print(sum(score))
print(avg)