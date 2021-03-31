package SortingSearching;

import java.util.Scanner;

public class pivotOnRotedArray {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		Finding(a);

	}

	private static void Finding(int[] a) {
		// TODO Auto-generated method stub
		int lo=0,hi=a.length-1;
		while(lo<hi)
		{
			int mid=(lo+hi)/2;
			
			if(a[mid]<a[hi])
				hi=mid;
			else
				lo=mid+1;
		}
		System.out.println(a[hi]);
		
	}

}
