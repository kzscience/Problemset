str1 = input()
str2 = input()

if str1.lower() > str2.lower():
    print(1)
elif str2.lower() > str1.lower():
    print(-1)
else:
    print(0)
