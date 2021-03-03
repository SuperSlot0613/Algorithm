package StackAndQueues;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class StackUsinQueues {
	
	static class Stack
	{
		static Queue<Integer> q1=new LinkedList<Integer>();
		static Queue<Integer> q2=new LinkedList<Integer>();
		int currt=0;
		
		void Push(int x)
		{
			currt++;
			q2.add(x);
			
			while(!q1.isEmpty())
			{
				q2.add(q1.peek());
				q1.remove();
			}
			
			Queue<Integer> q=q1;
			q1=q2;
			q2=q;
		}
		
		void pop()
		{
			if(q1.isEmpty())
				return;
			
			System.out.println(q1.peek()+" Is pop");
			q1.remove();
			currt--;
		}
		
		int top()
		{
			if(q1.isEmpty())
				return -1;
			return q1.peek();
		}
		int size()
		{
			return currt;
		}
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		Stack st=new Stack();
		st.Push(3);
		st.Push(4);
		st.Push(5);
		st.Push(45);
		
		System.out.println(st.size());
		System.out.println(st.top());
		st.pop();
		System.out.println("------------------");
		System.out.println(st.size());
		System.out.println(st.top());
		st.pop();
		System.out.println("------------------");
		System.out.println(st.size());
		System.out.println(st.top());
		st.pop();
		System.out.println("------------------");
		System.out.println(st.size());
		System.out.println(st.top());
		st.pop();
		System.out.println("------------------");

	}

}
