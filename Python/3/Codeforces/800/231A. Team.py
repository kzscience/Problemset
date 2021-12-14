number = int(input())
count=0
while number != 0:
    p,v,t =  map(int, input().split())
    if(p+v+t>1):
        count+=1
    number-=1

print(count)
