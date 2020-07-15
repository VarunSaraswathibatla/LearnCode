/* Emirp numbers (when reversed it is 'prime'...) are those prime numbers when reversed also becomes a prime number....
This program accepts a number and checks whether it is a emirp number or not...

Ex.1: Input: 13
      Output: Yes  (13 and 31 are prime numbers)
Ex.2: Input: 11    
      Output: Yes
Ex.3: Input: 12  
      Output: No
      
*/

import java.util.Scanner; 
class Emirp
{ 

	public static void main(String args[])  
	{ 
          Scanner sc=new Scanner(System.in);
	  int num=sc.nextInt();
          int rev=reverse(num);
	  if(isPrime(num) && isPrime(rev))
	      {
		System.out.println("Yes");
	      }
	  else
	      {
		System.out.println("No");
	      }
	  }
     
     public static int reverse(int n)
     {
       int temp=0,rev=0;
       while(n>0)
         {
         
         temp=n%10;
         rev=(rev*10)+temp;
         n=n/10;
         }
         
       return(rev);
     }
     
     
     public static boolean isPrime(int n)
     {  
          int i,j;
          if (n<=1)
          {   
              return false;
          }
          
          for (i=2;i<n;i++)
          {
            if (n%i==0)
            {
              return false;
            }
            
          }
          
            return true;
            
            }
    }
     
     
