l=[]
b=0
d=0
for i in range (1,7):
    l.append(float(input()))
for i in l:
    if i>0:
        b=b+i
        d=d+1
        c=b/d
print("{} valores positivos".format(d))
print("{:.1f}".format(c))
             
                 
             
    
