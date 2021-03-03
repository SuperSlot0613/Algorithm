package StackAndQueues;

import java.util.Scanner;
import java.util.Stack;

public class HistoGram {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		int rb[]=new int[n];
		Stack<Integer> st=new Stack<Integer>();
		st.push(a.length-1);
		rb[a.length-1]=a.length;
		for(int i=a.length-2;i>=0;i--)
		{
			while(st.size()>0&&a[i]<a[st.peek()])
				st.pop();
			if(st.size()==0)
				rb[i]=a.length;
			else
				rb[i]=st.peek();
			st.push(i);
		}
		
		int lb[]=new int[n];
		Stack<Integer> st1=new Stack<Integer>();
		st1.push(0);
		lb[0]=-1;
		
		for(int i=1;i<a.length;i++)
		{
			while(st1.size()>0&&a[i]<a[st1.peek()])
				st1.pop();
			if(st1.size()==0)
				lb[i]=-1;
			else
				lb[i]=st1.peek();
			st1.push(i);
		}
		
		int maxArea=0;
		for(int i=0;i<a.length;i++)
		{
			int width=(rb[i]-lb[i])-1;
			int area=a[i]*width;
			if(area>maxArea)
				maxArea=area;
		}
		
		System.out.println(maxArea);

	}

}
