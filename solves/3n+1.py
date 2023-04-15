def mcl(i,j):
    m = 0
    for n in range(i,j+1):
        li = []
        while True:
            li.append(n)
            if n == 1:
                break
            if n % 2 != 0:
                n = 3*n + 1
            else :
                n = n/2
            
  
        if m < len(li):
            m = len(li)
    return m
            
i= int(input())
j= int(input())
print (i,j,mcl(i,j))
