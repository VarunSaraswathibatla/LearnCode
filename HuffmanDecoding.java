/*https://www.hackerrank.com/challenges/tree-huffman-decoding/problem*/

/* Complete the following decode method*/

	void decode(String s, Node root) 
    	{
        // Start your code here
    
        StringBuilder ans= new StringBuilder();
        Node temp=root;
        for(char i: s.toCharArray())
        {
            if(i=='1')
            {
                temp=temp.right;
                if(temp.data=='\0')
                {
                    continue;
                }
                else
                {
                    ans.append(temp.data);
                    temp=root;
                    
                }
            }
            if(i=='0')
            {
                temp=temp.left;
                if(temp.data=='\0')
                {
                    continue;
                }
                else
                {
                    ans.append(temp.data);
                    temp=root;
                } 
            }
        }
        System.out.println(ans); 
    }
