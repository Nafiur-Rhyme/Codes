'''
x = int(input('Enter a number: '))
for i in range(0,x):
    for j in range(0,i+1):
        print('*',end='')
    print()
print()

x = int(input('Enter a number: '))
for i in range(0,x):
    for j in range(0,x-i):
        print('*',end='')
    print()
print()

x = int(input('Enter a number: '))
for i in range(0,x):
    for j in range(0,i):
        print(' ',end='')
    for j in range(0,x-i):
        print('*',end='')
    print()
print()
'''

'''
*
***
*****
*******
*********



x = int(input('Enter a number odd: '))
for i in range(1,x+1):
    if i % 2 !=0:   
        for j in range(1,i+1):
            print('*',end=' ')
        print()
'''
'''
        *
      ***
    *****
  *******
*********

x = int(input('Enter a number: '))
for i in range(1,x+1):
    if i % 2 !=0: 
        for k in range(i,x):
                print(' ',end=' ')  
        for j in range(1,i+1):
            print('*',end=' ')
            
        print()
'''
'''
**
****
******
********
**********

x = int(input('Enter the number of stars even: '))
for i in range(1, x):
    if i % 2 == 0:
        for j in range(1, i+1):
            print('*',end=' ')
        print()
'''
'''
1
333
55555
7777777
99999999

x = int(input('Enter the number of odds: '))
for i in range(1, x):
    if i % 2 != 0:
        for j in range(1, i+1):
            print(i,end=' ')
        print()
'''

'''
       1
     333
   55555
 7777777
99999999

x = int(input('Enter the number of odds: '))
for i in range(1, x):
    if i % 2 != 0:
        for k in range(i,x-1):
            print(' ', end=' ')
        for j in range(1, i+1):
            print(i,end=' ')
        print()
'''
'''
111111111
  3333333
    55555
      777
        9

x = int(input('Enter the number of odds: '))
for i in range(1, x+1):
    if i % 2 != 0:
        for k in range(0, i-1):
            print(' ', end=' ')
        for j in range(i, x):
            print(i, end=' ')
        print()
'''
'''
1
123
12345
1234567
123456789

x = int(input('Enter the number of odds: '))
for i in range(1, x):
    if i % 2 != 0:
        for j in range(1, i+1):
            print(j,end=' ')
        print()
'''
'''
        1
      123
    12345
  1234567
123456789
'''
x = int(input('Enter the number of odds with spaces: '))
for i in range(1, x):
    for k in range(i,x-1):
        print(' ',end=' ')
    for j in range(1, i+1):
        print (j,end=' ')
    print()






