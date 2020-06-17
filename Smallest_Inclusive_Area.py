'''
You are given some lists of areas where the first area of each list includes 
all other areas in that list.
Naturally, if an area A contains another area B then A is bigger than B. 
Also by definition an area A contains itself.
Given two areas area1, area2, find out the smallest area that contains both of them.
If you are given areas a1, a2 and a3 such that a1 includes a3, 
it is guaranteed there is no a2 such that a2 includes a3.
It's guaranteed the smallest area exists.
Example 1:
Input=	5
		Earth-North America-South America
		North America-United States-Canada
		United States-New York-Boston
		Canada-Ontario-Quebec
		South America-Brazil
		Quebec			//area-1
		New York		//area-2
Output=North America
 
Build family tree from offsprings to their parents;
Use a HashSet to construct ancestry history of area1;
Retrieve ancestry of area2 by family tree till find the first common ancestry 
in ancestry history of area1.
'''


n=int(input())
s = {}
for i in range(0,n):
    l = input().split('-')
    for pl in l[1:]:
        s[pl]=l[0]
print(s)        

a=input()
b=input()

while b in s.keys() and a in s.keys():    
    if s[a]==s[b]:
        print(s[a])
        break
    elif s[a]==b:
            print(b)
            break
    elif s[b]==a:
            print(a)
            break
    else:
            a=s[a]
            b=s[b]
          
else:
    if a not in s.keys():
        print(a)
    else:
        print(b)
