n = int(input())
x=0

for i in range(n):
      string = input()
      if string[0] == '+' or string[1] == '+':
          x+=1
      else:
         x-=1

print(x)
