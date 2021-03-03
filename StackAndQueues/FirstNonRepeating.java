package StackAndQueues;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class FirstNonRepeating {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String str=sc.next();
		PrintNonRepeted(str);

	}

	private static void PrintNonRepeted(String str) {
		// TODO Auto-generated method stub
		//creating the size of 26 lowercase charater array
		int count[]=new int[26];
		
		Queue<Character> q=new LinkedList<>();
		
		for(int i=0;i<str.length();i++)
		{
			char ch=str.charAt(i);
			q.add(ch);
			
			count[ch-'a']++;
			
			while(!q.isEmpty())
			{
				if(count[q.peek()-'a']>1)
					q.remove();
				else
					System.out.print(q.peek()+"");
				    break;
			}
			if(q.isEmpty())
				System.out.print(-1);
		}
		System.out.println();
		
	}

}
