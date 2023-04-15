def factor(n):
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return n//i
    return 1

for _ in range(int(input())):
    n=int(input())
    p=factor(n)
    print(p,n-p)

'''def gcd(a,b):
    if a == 0:
        return b
    return gcd(b%a,a)
def lcm(a,b):
    prod = a*b
    hcf = gcd(a,b)
    return prod // hcf

for _ in range(int(input())):
    n = int(input())
    apv = {}
    for a in range(1,n):
        b = n-a
        apv[(a,b)]= lcm(a,b)
        if b == n//2: break

    min_key = min(apv, key=lambda k: apv[k])
    print(min_key[0],min_key[1])'''
    