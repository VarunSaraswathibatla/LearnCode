/*Given an array of n-integers and a positive integer k , determine the number of unique pairs where pair1(0)+pair1(1)  is divisible by k.


Example:
Input: 6(n) 5(k)
       1 2 3 4 5 6

Output : 3  ( [1,4], [2,3], [6,4] )  

Hint : a%k +b%k == k or 0  and Time Complexity : O(n+k)
*/

import java.io.*;
import java.util.*;

public class Main {

   
    static int divisibleSumPairs(int n, int k, int[] ar)
    {
        int count=0;
        int[] arr;
        arr = new int[k];
        for(int i=0;i<n;i++)
        {
           arr[ar[i]%k]+=1; // hashing or remainders array. 
        } 
       
        for(int i=1;i<(k+1)/2;i++)
        {
            count+=arr[i]*arr[k-i]; // composite pairs.
        }
       
        count+=arr[0]*(arr[0]-1)/2; // arr[0] contains 5 multiples i.e arr[0]%5==0
        if(k%2==0)
        {
            count+=arr[k/2]*(arr[k/2]-1)/2; // if k is even the above loop misses middle term.
        }

        return count;
    }

public static void main(String args[])
{
    int n,k;
    int[] a;
    Scanner sc=new Scanner(System.in);
    n=sc.nextInt();
    k=sc.nextInt();
    a=new int[n];
    for(int i=0;i<n;i++)
    {
        a[i]=sc.nextInt();
    }
    
    int ans=divisibleSumPairs(n,k,a);
    System.out.println(ans);
}
}
