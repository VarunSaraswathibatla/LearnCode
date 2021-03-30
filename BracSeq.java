/*Check the sequence of brackets and print they are in sequence or not(Stack Application)*/

import java.io.*;
import java.util.*;
public class Main
{
    public static boolean CheckBrac(String s)
    {
        Stack<Character> stack=new Stack<>();
        int i;
        
        for(i=0;i<s.length();i++)
        {
          
            if(s.charAt(i)=='{' || s.charAt(i)=='[' || s.charAt(i)=='(')
            {
                stack.push(s.charAt(i));
            }
            if(!stack.empty())
            {
            if(s.charAt(i)=='}')
            {
                if(stack.peek()=='{')
                {
                    stack.pop();
                }
                else
                return false;
            }
            if(s.charAt(i)==']')
            {
                if(stack.peek()=='[')
                {
                    stack.pop();
                }
                else
                return false;
            }
            if(s.charAt(i)==')')
            {
                if(stack.peek()=='(')
                {
                    stack.pop();
                }
                else
                return false;
            }
            
            
        }
        else
        {
            return false;
        }
        }
        if(stack.empty())
        {
            return true;
        }
        return false;
        
    }
    
    
	public static void main(String[] args)
	{
	    String s;
	    System.out.println("Enter String:");
	    Scanner sc=new Scanner(System.in);
	    s=sc.nextLine();
	   boolean ans= CheckBrac(s);
	   if(ans)
	   {
	       System.out.println("Yes");
	   }
	   else
	   {
	       System.out.println("No");
	   }
	}
}
	
		
		
