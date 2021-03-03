package StackAndQueues;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.Stack;

public class InterLeave {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();//enter the even number only
		Queue<Integer> qe=new LinkedList<Integer>();
		for(int i=0;i<n;i++) {
			qe.add(sc.nextInt());
		}
		Stack<Integer> st=new Stack<Integer>();
		int half=n/2;
		for(int i=0;i<half;i++)
		{
			st.push(qe.peek());
			qe.poll();
		}
		while(!st.isEmpty())
		{
			qe.add(st.peek());
			st.pop();
		}
		for(int i=0;i<half;i++)
		{
			qe.add(qe.peek());
			qe.poll();
		}
		for(int i=0;i<half;i++)
		{
			st.push(qe.peek());
			qe.poll();
		}
		while(!st.isEmpty())
		{
			qe.add(st.peek());
			st.pop();
			qe.add(qe.peek());
			qe.poll();
		}
		System.out.println(qe);

	}

}
