package SortingSearching;

import java.util.Arrays;
import java.util.Scanner;

public class BookAllocation {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		int m=sc.nextInt();
		Arrays.sort(a);
		System.out.println(PageAllocation(a,n,m));

	}

	private static int PageAllocation(int[] a, int n, int m) {
		// TODO Auto-generated method stub
		long low=a[0];
		long hi=Arrays.stream(a).sum();
		int ans=-1;
		while(low<=hi)
		{
			long mid=(low+hi)/2;
			
			if(check(mid,a,m)==true)
			{
				ans=(int) mid;
				hi=mid-1;
			}
			else
			{
				low=mid+1;
			}
				
		}
		return ans;
	}

	private static boolean check(long mid, int[] a, int m) {
		// TODO Auto-generated method stub
		int count=1;
		long sum=0;
		for(int i=0;i<a.length;i++)
		{
			if(sum+a[i]>mid)
			{
				sum=a[i];
				count++;
				if(count>m)
					return false;
			}
			else
				sum=sum+a[i];
		}
		return true;
	}

}
