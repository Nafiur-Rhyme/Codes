def insertDigit(n,d, st):
    ls = []
    st2 = st
    cur = int()
    c = 1
    for i in range(n):
        cur = int(st[i])
        if (d>cur):
            #c+=1
            st2 = st[:i] + str(d) + st[i:]
            break
    if(len(st)==len(st2)):
        st2 += str(d)  
    return st2

            
for _ in range(int(input())):
    n,d = map(int,input().split())
    st = input()
    print(insertDigit(n,d,st))

