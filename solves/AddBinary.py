def addBinary(a,b):
    z = ''
    lim = max(len(a),len(b))
    smaller = min(len(a),len(b))
    m = lim - min(len(a),len(b))
    z = '0' * m
    if(smaller == len(a)):
        a = z + a
    else:
        b = z + b
    sum = []
    car = 0
    for i in range(lim-1,-1,-1):
        if((car + int(a[i])+int(b[i]))==1):
            sum.append(1)
            car = 0
        elif((car + int(a[i])+ int(b[i]))==2):
            sum.append(0)
            car = 1
        elif((car + int(a[i])+int(b[i]))==3):
            sum.append(1)
            car = 1
        else:
            sum.append(0)
            car = 0
    if(car==1):
        sum.append(1)

    sum.reverse()

    sum = ''.join(str(e) for e in sum)
    print(sum)
        
    
a = input()
b = input()