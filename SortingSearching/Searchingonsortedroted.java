package SortingSearching;

import java.util.Scanner;

public class Searchingonsortedroted {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		int target=sc.nextInt();
		System.out.println("Element found on "+Searching(a,n,target));

	}

	
	private static int Searching(int[] a, int n, int target) {
		// TODO Auto-generated method stub
		int lo=0,hi=n-1;
		while(lo<=hi)
		{
			int mid=lo+(hi-lo)/2;
			if(a[mid]==target)
				return mid;
			else if(a[mid]>=a[lo])
			{
				//case 1
				if(target>=a[lo] && target<=a[mid])
					hi=mid-1;
				else
					lo=mid+1;
			}
			else
			{
				if(target>=a[mid] && target<=a[hi])
					lo=mid+1;
				else
					hi=mid-1;
			}
		}
		return -1;
	}

}
