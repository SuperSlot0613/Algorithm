package SortingSearching;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Deque;
import java.util.LinkedList;
import java.util.Scanner;

public class FindAllSum {
    static int num;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		num=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		Arrays.sort(a);
		Deque<Integer> de=new LinkedList<Integer>();
		Foursum(a,n,0,0,0,de);
		

	}

	private static void Foursum(int[] a, int n, int i, int l, int sum, Deque<Integer> de) {
		// TODO Auto-generated method stub
		if(i>n-1)
			return;
		if(l==4&&sum==num)
		{
			System.out.print(de+" ");
			System.out.print("$");
			return;
		}
		if(l==4&&sum!=num)
			return;
		for(int j=i;j<n;j++)
		{
			sum=sum+a[j];
			de.addLast(a[j]);;
			//System.out.print(de.pollFirst()+" ");
			Foursum(a,n,j+1,l+1,sum,de);
			sum=sum-a[j];
			de.pollLast();
		}
		
		return;
	}

}
