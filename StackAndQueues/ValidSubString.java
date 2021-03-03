package StackAndQueues;

import java.util.Scanner;
import java.util.Stack;

public class ValidSubString {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String s=sc.next();
		Stack<Character> st=new Stack<Character>();
		int count=0;
		for(int i=0;i<s.length();i++)
		{
			char c=s.charAt(i);
			if(st.isEmpty()||c=='(')
				st.push(c);
			if(c==')'&&st.peek()=='(')
			{
				count+=2;
				st.pop();
			}
				
		}
		System.out.println(count);

	}

}
