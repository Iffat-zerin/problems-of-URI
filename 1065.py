l=[]
d=0
for i in range(5):
    l.append(int(input()))
for i in l:
    if i%2==0:
        d=d+1
print(d,"valores pares")
