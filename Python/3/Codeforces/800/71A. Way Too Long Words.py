number = int(input())

for s in range(number):
    s = input()
    maximum = len(s)
    if maximum<=10:
        print(s)
    else:
       print(s[0] + str(maximum-2) + s[maximum-1])
