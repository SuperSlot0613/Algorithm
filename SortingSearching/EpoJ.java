package SortingSearching;

import java.util.Arrays;
import java.util.Scanner;

public class EpoJ {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int h=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		Arrays.sort(a);
		System.out.println(WoodRequired(a,n,h));

	}

	private static int WoodRequired(int[] a, int n, int h) {
		// TODO Auto-generated method stub
		long low=a[0];
		long hi=a[a.length-1];
		int ans=0;
		while(low<=hi)
		{
			long mid=(low+hi)/2;
			if(IsValid(a,h,mid))
			{
				ans=(int) mid;
				low=mid+1;
			}
			else
			{
				low=mid+1;
			}
		}
		return ans;
	}

	private static boolean IsValid(int[] a, int h, long mid) {
		// TODO Auto-generated method stub
		long sum=0;
		for(int i=0;i<a.length;i++)
		{
			if(a[i]>mid)
			{
				sum=sum+(a[i]-mid);
				if(sum==h)
					return true;
			}
		}
		return false;
	}

}
