while True:
    n = int(input('정수 입력>> '))
    if n % 2 != 0:
        for i in range(1,(n+1)//2 + 1):
            print(' ' * (((n+1)//2)-i) + '*' * ((2*i)-1))
        for j in range(1, (n+1)//2 + 1):
            print(' ' * j + '*' * (n-(2*j)))
        print('그만하려면 0을 입력하세요')
        continue
    elif n == 0:
        print('별 찍기를 종료합니다 ... ')
        break
    else:
        for i in range(1, n//2 + 1):
            print(' ' * (n//2 - i) + '*' * (2*i))
        for j in range(n//2, 0, -1):
            print(' ' * (n//2 - j) + '*' * (2*j))
        print('')
        print('그만하려면 0을 입력하세요')
