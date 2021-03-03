package StackAndQueues;

import java.util.Scanner;
import java.util.Stack;

public class ParanthesisCheck {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String s=sc.next();
		System.out.println(isValid(s));

	}

	private static boolean isValid(String s) {
		
		Stack<Character> st=new Stack<>();
		
		for(int i=0;i<s.length();i++)
		{
			char ch=s.charAt(i);
			
			if(ch=='('||ch=='{'||ch=='[')
				st.push(ch);
			else
			{
				if(st.isEmpty())
					return false;
				char p=st.peek();
				
				if(ch=='('&&p!=')')
					return false;
				else if(ch=='{'&&p!='}')
					return false;
				else if(ch=='['&&p!=']')
					return false;
				else
					st.pop();
			}
		}
		return st.isEmpty();
		
	}

}
