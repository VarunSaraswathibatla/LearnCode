n = int(input())
print ("Following are the prime numbers upto", n )
temp = [True for i in range(n+1)] 
i=2
while(i*i<=n):
    if temp[i]==True:
        for k in range(i*i,n+1,i):
            temp[k]=False
            
    i+=1


for z in range(2,n):
    if(temp[z]):
        print(z)
    
