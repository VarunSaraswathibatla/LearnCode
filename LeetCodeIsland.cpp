/*
Problem Link: https://leetcode.com/problems/island-perimeter

EX1: Input: No of rows:4
            No of columns:4
     Enter elements row by row:
             0100
             1110
             0100
             1100

    Output:Perimeter of island is: 16
    
    
Ex2: Input: 0100
            1110
            
            
    Output:Perimeter of island is: 10
*/


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int Perimeter(vector<vector<char>> grid) 
    {
        int c = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0;i < grid.size(); i++) {
            for(int j = 0;j < grid[0].size(); j++) {
                if(grid[i][j] == '1') {
                    if(i == 0) c++;
                    if(i == n-1) c++;
                    if(i-1 >= 0 && grid[i-1][j]=='0') c++;
                    if(i+1 < n && grid[i+1][j]=='0') c++;
                    if(j == 0) c++;
                    if(j == m-1) c++;
                    if(j-1 >= 0 && grid[i][j-1]=='0') c++;
                    if(j+1 < m && grid[i][j+1]=='0') c++;
                }
            }
        }
        return c;
    }
};
int main()
{
    vector<vector<char>>grid;
    
    int r,c,i,j;
    
    cout<<"No of rows:"<<endl;
    cin>>r;
    cout<<"No of columns:"<<endl;
    cin>>c;
    cout<<"Enter the status of the grid row by row"<<endl;
    for(i=0;i<r;i++)
    {
    
        string s;
        int z,l;
        vector<char> row;
        cin>>s;
        l=s.length();
        for(z=0;z<l;z++)
        {
            row.push_back(s[z]);
        }
    
    grid.push_back(row);
        
    }
    cout<<endl;
   
    Solution solution;
    cout<<"Perimeter of the island is: "<<solution.Perimeter(grid);
}
