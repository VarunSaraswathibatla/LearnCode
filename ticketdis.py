t=input()
t=t.split()
total=int(t[0])
stud=int(t[1])
complist=[]
for i in range(total):
    s=input()
    s=s.split()
    complist.append(int(s[0]))
    complist.append(int(s[1]))
l=len(complist)
p=[]
for i in range(1,l,2):
    p.append(int(complist[i]))    
del complist[1:l:2]
m=0
for z in range(stud):
    m+=p[z]
ctr=len(p)-(stud-1)

sumlist=[]
nlist=[]
for k in range(ctr):
    su=0
    for c in range(k,stud+k):
        su+=p[c]
    sumlist.append(su)
    if su>m:
        m=su
        nlist.append(k)
print(complist[nlist[-1]])

