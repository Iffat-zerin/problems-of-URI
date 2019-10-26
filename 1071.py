a=int(input())
b=int(input())
c=0
if a>b:
    for i in range (b+1,a):
        if i%2==1 or i%2==-1:
            c=c+i
print(c)
