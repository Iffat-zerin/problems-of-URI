a=[]
b=0
c=0
d=0
e=0
for i in range(1,6):
    a.append(int(input()))
for i in a:
    if i%2==0:
        b=b+1
    if i%2==1 or i%2==-1:
        c=c+1
    if i>0:
        d=d+1
    if i<0:
        e=e+1
print(b,"valor(es) par(es)")
print(c,"valor(es) impar(es)")
print(d,"valor(es) positivo(s)")
print(e,"valor(es) negativo(s)")
