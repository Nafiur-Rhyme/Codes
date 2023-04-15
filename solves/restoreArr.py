def restoreArray(n,b):
    a = []
    for i in range(n-2):
        a.append(min(b[i],b[i+1]))
    a.insert(0,b[0])
    a.append(b[n-2])
    return a

for _ in range(int(input())):
    n = int(input())
    b = list(map(int,input().split()))
    a = restoreArray(n,b)
    print(*a)