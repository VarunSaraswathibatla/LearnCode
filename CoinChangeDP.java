/*https://www.hackerrank.com/challenges/ctci-coin-change/problem?h_r=internal-search */


public class Solution {

    // Complete the ways function below.
    static long ways(int n, int[] coins)  // n is sum required. coins is array coins available
    {
        
       Arrays.sort(coins);
       long[] ans=new long[n+1];
       ans[0]=(long)1;
       for(int coin:coins)
       {
           for(int j=coin;j<n+1;j++)
           {
               ans[j]+=ans[j-coin];
           }
           
           
       }
       return ans[n];
       
    }
        
        
        
        
        
        
        
        
        
        
        


    
