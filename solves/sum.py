'''
# Print the sum of the digits in a number

x = int(input("Number: "))
sum = int()
temp = int()
while x > 0:
    temp = x%10 
    sum += temp
    x /= 10
    x = int(x)
print(sum)


x = input('Give a digit: ')
sum = 0
for i in x:
    sum += int(i)

print('sum: ' + str(sum))
'''



