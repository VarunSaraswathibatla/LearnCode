#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 
  
int main()
{
    map<string,int>d;
    string s;
    getline(cin,s)
    s+=" ";
    string word="";
    int i;
    for(i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            word+=s[i];
            
        }
        else
        {d[word]++;
            word="";
        }
    }
    
         for (auto& it : d) { 
        cout << it.first << " - "
             << it.second 
             << endl; 
    }
    
}
    
    
    
    
    
    
    
