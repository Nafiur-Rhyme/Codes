#formula: product = lcm * gcd
# a*b = lcm(a,b) * gcd(a,b)
# => lcm(a,b) = a*b / gcd(a,b)
def gcd(a,b):
    if a == 0:
        return b
    return gcd(b%a,a)
def lcm(a,b):
    prod = a*b
    hcf = gcd(a,b)
    return prod // hcf

t = int(input())
while t:
    a , b = map(int, input().split())
    print("GCD = {}, LCM = {}".format(gcd(a,b), lcm(a,b)))
    t-=t