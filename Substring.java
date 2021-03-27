/* Find whether given substring is present or not in the given string */

                      
import java.io.*;
import java.util.*;
public class Main
{
    public static void Findsub(String s,String t)
    {
        int i,flag=0;
       
        for(i=0;i<s.length();i++)
        {  
            if(flag==t.length())
            {
                break;
            }
             if(Character.toLowerCase(s.charAt(i))==Character.toLowerCase(t.charAt(flag)))
            {
                flag++;
                
            }
            else
            {
                flag=0;
                
            }
        }
        if(flag==t.length())
            {
                System.out.println("Yes from "+(i-t.length())+" to "+(i-1)+" indexes of string");
            }
        else
        {
             System.out.println("No");
        }
    }
    
    
    
    
	public static void main(String[] args) {
	 
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter String:\n");
	String s=sc.nextLine();
	System.out.println("Enter Substring:\n");
	String t=sc.nextLine();
	if(s.length()>=t.length())
	{
	Findsub(s,t);
	}
	else
	{
	    System.out.println("No");
	}
		
	}
}

