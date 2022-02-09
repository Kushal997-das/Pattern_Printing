'''
enter the number:5
          1
        2 1 2
      3 2 1 2 3
    4 3 2 1 2 3 4
  5 4 3 2 1 2 3 4 5
'''
num=int(input('enter the number:'))
for i in range(1,num+1):
    for j in range(0,num-i+1):
        print(end='  ')
    for j in range(i,0,-1):
        print(j,end=' ')
    for k in range(2,i+1):
        print(k,end=' ')
    print()
