def longestCommonPrefix(x):
    x.sort(key=len)
    lcp = ''
    flag = False
    for i in range(0,len(x[0])):
        for j in range(0,len(x)):
            if x[0][i] == x[j][i]:
                flag = True
            else:
                flag = False
                break
        if flag == True:
            lcp += x[0][i]
        else:
            break 
    return lcp
y = ['car','cir'] 
x = ['flower','flow','flight']
print(longestCommonPrefix(x))
