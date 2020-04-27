"""
In a country with ‘n’ cities, flight services are provided from some cities to certain cities
only. The presence of flight service is represented by a directed graph as shown below.
According to this graph, there are three flight services from city 1 to city 2, city 3 and city 4.
There is no flight service from city 6.
Given the flight services available in a country and a source city ‘s’ and a destination city
d’, write a code to check if a person from city ‘s’ can reach city ‘d’ using the flight services.
If the person can reach then print 'Yes' and Print ‘No’ otherwise.

Input Format
First line contains the number of cities in the country, n
Next ‘n’ lines contain the detail of flights to cities, each field in a line is separated by a
space. First field is the city name ‘c’, next is the number of cities to which flight service is
present from ‘c’, followed by the city names to which flight service is from ‘c’
Next line contain the source city name from which the person wants to travel, s
Next line contain the destination city name to which the person wants to travel, d 

Output Format
Print Yes if there exists connecting flights between s and d and No otherwise 



Input:                
7
1 3 2 3 4
2 2 4 5
3 1 6
4 3 3 6 7
5 2 4 7
6 0
7 1 6
1
7 

Output:
Yes

Input:
7
1 3 2 3 4
2 2 4 5
3 1 6
4 3 3 6 7
5 2 4 7
6 0
7 1 6
1
7


Output:
No


"""
city=int(input())
dic={}

for i in range(city):
    s=(input().split())
    s.remove(s[1])
    s[0]=i+1
    s= [int(i) for i in s] 
    dic[s[0]]=s[1:]

gs=int(input())
gd=int(input())
i=1
if gd in dic[gs]:

    print("yes")
 
else:
    
    while i<len(dic)+1:
        
        if gd in dic[i]:

             s=i
             if s == gs:
                  print("Yes")
                  break
             else:
                 gd=s
                 i=1
                 continue
         
      
        else:
            i+=1
    else:
        print("No")
