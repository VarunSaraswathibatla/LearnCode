
// Problem Link: https://leetcode.com/problems/hamming-distance


import java.util.*;
public class Hamming
{ 


static int dist(int n1, int n2) 
{ 
	int x = n1 ^ n2; 
	int setBits = 0; 

	while (x > 0) 
	{ 
		setBits += x & 1; 
		x >>= 1; 
	} 

	return setBits; 
} 


public static void main(String[] args) 
{ 
  Scanner sc=new Scanner(System.in);
  
	int n1 = sc.nextInt();
  int n2 = sc.nextInt(); 
  
	System.out.println(dist(n1, n2)); 
} 
}
