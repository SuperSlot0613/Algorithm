package StackAndQueues;

import java.util.*;
import java.util.Stack;

public class NextGreater {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		NGEF(a,a.length);

	}

	private static void NGEF(int[] a, int length) {
		// TODO Auto-generated method stub
		Stack<Integer> s=new Stack<>();
		
		s.push(a[0]);
		
		for(int i=1;i<length;i++)
		{
			int next=a[i];
			if(!s.isEmpty())
			{
				int element=s.pop();
				while(element<next)
				{
					System.out.println(element+" -> "+next);
					if(s.isEmpty())
						break;
					element=s.pop();
				}
				if(element>next)
					s.push(element);
			}
			s.push(next);
		}
		while(!s.isEmpty())
		{
			int element=s.pop();
			int next=-1;
			System.out.println(element+" -> "+next);
		}
		
	}

}
