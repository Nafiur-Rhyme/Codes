t = int(input())
while t>0:
    m = {}
    alpha = str(input())
    val = 1
    for letter in alpha:
        m[letter] = val
        val += 1
    word = str(input())
    result = 0
    for i in range(len(word)-1):
        if len(word) == 1:
            break
        result += abs(m[word[i+1]]-m[word[i]])
    print (result)
    t-=1





