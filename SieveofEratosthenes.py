"""
SieveofEratosthenes is an efficient algorithm to find all prime numbers upto a given limit n.
Method:
Let all the numbers upto limit n be prime numbers(Assume)
then,
All the i(i+1),i(i+2),i(i+3),.......terms(until i*i<=n) are made as composite numbers.(Here i is a current integer between (2-n))
Remaining all the numbers are printed which are the prime numbers.
"""

n = int(input())
print ("Following are the prime numbers upto", n )
temp = [True for i in range(n+1)] 
i=2        #Prime numbers start from '2'
while(i*i<=n):
    if temp[i]==True:
        for k in range(i*i,n+1,i):
            temp[k]=False
    i+=1
    
for z in range(2,n):
    if(temp[z]):
        print(z)
    
