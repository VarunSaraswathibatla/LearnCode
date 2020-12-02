/* A robot is located at the top-left corner of a m x n grid.

The robot can only move either "down" or "right" at any point in time. The robot is trying to reach the bottom-right corner of the grid.

How many possible unique paths are there?

Example 1:

Input: m = 2, n = 3
Output: 3
Explanation:
From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Right -> Down
2. Right -> Down -> Right
3. Down -> Right -> Right

Problem Diagram Link: https://leetcode.com/problems/unique-paths
*/

#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int uniquePaths(int r,int c)
    {
        vector<vector<int>>grid(r,vector<int> (c));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if (i==0 || j==0)
                {
                    grid[i][j]=1;
                }
                else
                grid[i][j]=grid[i-1][j]+grid[i][j-1];
            }
        }
    return grid[r-1][c-1];
    }
};

int main()
{
    int r,c;
    cout<<"Enter number of rows:"<<endl;
    cin>>r;
    cout<<"Enter number of columns:"<<endl;
    cin>>c;
    Solution solution;
   cout<<"\nNo of uniquePaths are: "<<(solution.uniquePaths(r,c));
}
