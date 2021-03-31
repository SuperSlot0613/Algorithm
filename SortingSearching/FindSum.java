package SortingSearching;

import java.util.HashSet;
import java.util.Scanner;

public class FindSum {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		int sum=sc.nextInt();
		System.out.println(SearchSumPair(a,sum));

	}

	private static boolean SearchSumPair(int[] a, int sum) {
		// TODO Auto-generated method stub
		HashSet<Integer> set=new HashSet<Integer>();
		for(int value:a)
		{
			if(set.contains(value))
				return true;
			set.add(sum-value);
		}
		return false;
	}

}
