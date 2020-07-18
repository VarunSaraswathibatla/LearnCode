/* Anagrams are words or phrases or names which are formed by rearranging the letters of another(Ex: spar,rasp are anagrams...)
This program accepts two strings and checks whether they are anagrams or not.

Ex1: Input: Dormitory
            Dirty Room
     
     Output: They are Anagrams.    

Ex2: Input: Cool Breeze
            Cool Breads
     
     Output: They are not Anagrams.

*/

import java.util.*;
public class Anagram
{
  public static void main(String args[])
  {
    String s1,s2;
    Scanner sc=new Scanner(System.in);
    s1=sc.nextLine();
    s2=sc.nextLine();
    isAnagram(s1,s2);
  }
   
   public static void isAnagram(String s1,String s2)
    {
        String a,b;
        a=s1.replaceAll("\\s","");
        b=s2.replaceAll("\\s","");

        char[] a1=a.toLowerCase().toCharArray();
        char[] b1=b.toLowerCase().toCharArray();

        Arrays.sort(a1);
        Arrays.sort(b1);

        boolean c=Arrays.equals(a1,b1);

        if(c)
        {
          System.out.println("They are Anagrams");
        }
        else
        {
          System.out.println("They are not Anagrams");
        }
        
      }
      
    }    
    
