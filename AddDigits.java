/*Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
Input: 38
Output: 2 
Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
             Since 2 has only one digit, return it.
             
Follow up:
Could you do it without any loop/recursion in O(1) runtime?
*/



import java.util.*;
public class AddDigits
{
  public static void addDigits(int num)
    {
      System.out.println((num%9 == 0) ?9:(num%9));
    }
         
  public static void main(String args[])
   {
      int num;
      System.out.println("Enter the number");
      Scanner sc=new Scanner(System.in);
      num=sc.nextInt();
      if (num == 0)
      System.out.println("0");
      else
      addDigits(num);
    }  
}
