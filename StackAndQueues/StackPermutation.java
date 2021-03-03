package StackAndQueues;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.Stack;

public class StackPermutation {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		Queue<Integer> input=new LinkedList<Integer>();
		Queue<Integer> output=new LinkedList<Integer>();
		for(int i=0;i<n;i++)
			input.add(sc.nextInt());
		for(int i=0;i<n;i++)
			output.add(sc.nextInt());
		boolean ch=CheckPermutation(input,output,n);
		if(ch)
			System.out.println("YES");
		else
			System.out.println("NO");

	}

	private static boolean CheckPermutation(Queue<Integer> input, Queue<Integer> output, int n) {
		// TODO Auto-generated method stub
		Stack<Integer> temp=new Stack<Integer>();
		while(!input.isEmpty())
		{
			int ele=input.poll();
			
			if(ele==output.peek())
			{
				output.poll();
				while(!temp.isEmpty())
				{
					if(temp.peek()==output.peek())
					{
						temp.pop();
						output.poll();
					}
					else
						break;
				}
			}
			else
				temp.push(ele);
		}
		return (input.isEmpty()&&temp.isEmpty());
	}

}
