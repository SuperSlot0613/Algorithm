package StackAndQueues;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.Stack;

public class ReverseTheKelement {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int k=sc.nextInt();
		Queue<Integer> qe=new LinkedList<Integer>();
		Queue<Integer> qe1=new LinkedList<Integer>();
		Stack<Integer> st=new Stack<Integer>();
		for(int i=0;i<n;i++)
			qe.add(sc.nextInt());
		while(!qe.isEmpty())
		{
			int ele=qe.poll();
			st.push(ele);
			if(ele==k)
				break;
		}
		while(!st.isEmpty())
			qe1.add(st.pop());
		while(!qe.isEmpty())
			qe1.add(qe.poll());
		System.out.println(qe1);
		

	}

}
