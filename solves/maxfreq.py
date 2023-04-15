#function 
def charFrequency(x):
    count = {}
    for keys in x:
        if keys in count:
            count[keys] += 1
        else:
            count[keys] = 1
    return count
  
#main
x = "moontrovert"
count = charFrequency(x)
max = count['m']
for i in count:
    if max < count[i]:
        max = count[i]
print (list(count.keys())[list(count.values()).index(max)])
