n, k = map(int, input().split())
arr = list(map(int, input().split()))
s = 0

for i in range(0,n):
    if arr[k-1] == 0 and arr[i] == arr[k-1]:
            s+=0
    elif arr[k-1] <=arr[i]:
        s+=1
    else:
        s+=0

print(s)
