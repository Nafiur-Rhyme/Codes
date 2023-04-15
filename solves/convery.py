def energy(n,x,y):
    x -=1
    y -=1
    x = min(x,n-x-1)
    y = min(y,n-y-1)

    return min(x,y)

for _ in range(int(input())):
    n,x1,y1,x2,y2 = (map(int,input().split()))
    print(abs(energy(n,x1,y1)-energy(n,x2,y2)))