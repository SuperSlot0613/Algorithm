package StackAndQueues;

import java.util.Scanner;
import java.util.Stack;

public class RedundentBracket {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String s=sc.next();
		findRedundant(s);
	}
	 static boolean checkRedundancy(String s)  { 
	       
		 Stack<Character> st=new Stack<Character>();
		 char c[]=s.toCharArray();
		 
		 for(char ch:c)
		 {
			 if(ch==')')
			 {
				 char top=st.peek();
				 st.pop();
				 
				 boolean flag=true;
				 
				 while(top!='(')
				 {
					 if(top=='+'||top=='-'||top=='*'||top=='/')
						 flag=false;
					 top=st.peek();
					 st.pop();
				 }
				 
				 if(flag==true)
					 return true;
			 }
			 else
				 st.push(ch);
		 }
		 return false;
		 
		 
	  } 
	  
	// Function to check redundant brackets  
	    static void findRedundant(String str) { 
	        boolean ans = checkRedundancy(str); 
	       if(ans==true)
	    	   System.out.println("Yes");
	       else
	    	   System.out.println("No");
	    } 

}
