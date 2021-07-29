def leapYear(a):
    if (a%4==0) and (a%100)!=0 or (a%400==0):
        return 1
    else:
        return 0
    

year = int(input(""))
print(leapYear(year))