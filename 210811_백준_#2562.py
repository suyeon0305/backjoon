l = []

for i in range(9):
    n = int(input(''))
    l.append(n)

m = max(l)
print(m)
print(l.index(m)+1)

'''
print(max(l))
print(l.index(max(l))+1)
'''