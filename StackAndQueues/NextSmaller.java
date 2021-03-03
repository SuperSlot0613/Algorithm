package StackAndQueues;

import java.util.Scanner;
import java.util.Stack;

public class NextSmaller {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++)
			arr[i]=sc.nextInt();
		Stack<Integer> st=new Stack<Integer>();
		int rb[]=new int[n];
		st.push(arr.length-1);
		rb[arr.length-1]=-1;
		for(int i=arr.length-2;i>=0;i--)
		{
			if(st.size()>0&&arr[i]<arr[st.peek()])
				st.pop();
			if(st.size()==0)
				rb[i]=-1;
			else
				rb[i]=st.peek();
			st.push(i);
		}
		
		for(int i=0;i<n;i++)
		{
			System.out.println(arr[i]+" -> "+rb[i]);
		}

	}

}
