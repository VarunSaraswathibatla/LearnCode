/* Print all the sets in an array (may or maynot be contiguos) that result a sum K 

Ex : 5 // Number of elements in array
     1
     2
     3
     4
     5
     8 // Target Sum
     
     true // Print true if Possible
     [5,3]
     [5,2,1]
     [4,3,1]
     
   Ex : 5
        1
        2
        3
        4
        1
        5 // Target Sum
  
  O/P   true
        [1,4]
        [3,2]
        [1,3,1]
        [4,1]
        
  Ex : 7
       1
       2
       3
       4
       5
       9
       8
       34
  
  O/P false





*/



import java.io.*;
import java.util.*;

public class Main {

    public static class Pair{
        int i;
        int j;
        String psf;

        public Pair(int i, int j, String psf){
            this.i = i;
            this.j = j;
            this.psf = psf;
        }
    }
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }

        int tar = Integer.parseInt(br.readLine());
        
        boolean[][] dp= new boolean[arr.length+1][tar+1];
        
        
        
        
        for(int i=0;i<=arr.length;i++)
        {
            for(int j=0;j<=tar;j++)
            {
                if(j==0)
                {
                    dp[i][j]=true;
                }
                else if(i==0)
                {
                    dp[i][j]=false;
                }
                else
                {
                   if(j<arr[i-1])
                   {
                       dp[i][j]=dp[i-1][j];
                   }
                   else
                   {
                       if(dp[i-1][j] || dp[i-1][j-arr[i-1]])
                       {
                           dp[i][j]=true;
                       }
                       else
                       {
                           dp[i][j]=false;
                       }
                   }
                    
                    
                    
                    
                    
                }
            }
        }
        System.out.println(dp[arr.length][tar]);
        
        
        ArrayDeque<Pair> queue = new ArrayDeque<Pair>();
        String str="";
        queue.add(new Pair(arr.length,tar,str));
        
        while(queue.size()>0)
        {
            Pair cur =  queue.removeFirst();
            
            
            
            if(cur.j==0 || cur.i==0)
            {
                String [] ans= cur.psf.split(" ");
                List<String> list = Arrays.asList(ans);
                System.out.println(list);
            }
            else 
            {
                if(cur.j>=arr[cur.i-1])
            {
                boolean in = dp[cur.i-1][cur.j -arr[cur.i-1]];
                if(in)
                {
                    queue.add(new Pair(cur.i-1,cur.j-arr[cur.i-1],cur.psf+arr[(cur.i-1)]+" "));
                }
            }
            
            boolean ex = dp[cur.i-1][cur.j];
            if(ex)
            {
                queue.add(new Pair(cur.i-1,cur.j,cur.psf));
            }
            
            }
        
        }
    }
}
