/*https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/*/


class Solution {
    public int lengthOfLongestSubstring(String s)
    {
        int i=0,j=0,max=0;
        
        HashSet<Character> set=new HashSet<Character>();
        while(i!=s.length())
        {
            if(!set.contains(s.charAt(i)))
            {
                set.add(s.charAt(i));
                i++;
            }
            else
            {
                if(max<set.size())
                {
                max=set.size();
                }
                set.remove(s.charAt(j));
                j++;
                
            }

        }
        if(i==s.length())
        {
            if(max<set.size())
                {
                max=set.size();
                }
        }
        
        return max;
        
        
    }
}
