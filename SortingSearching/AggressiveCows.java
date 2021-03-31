package SortingSearching;

import java.util.Arrays;
import java.util.Scanner;

public class AggressiveCows {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int c=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		Arrays.sort(a);
		
		System.out.println(CowSearch(a,c,n));

	}

	private static int CowSearch(int[] a, int c, int n) {
		// TODO Auto-generated method stub
		int l=1,hi=a[a.length-1]-1;
		int ans=0;
		while(l<=hi)
		{
			int mid=(l+hi)/2;
			
			if(check(mid,c,a)==true)
			{
				ans=mid;
				l=mid+1;
			}
			else
			{
				hi=mid-1;
			}
		}
		return ans;
		
	}

	private static boolean check(int mid, int c, int[] a) {
		// TODO Auto-generated method stub
		int last=a[0];
		int count=1;
		
		for(int i=1;i<a.length;i++)
		{
			if(a[i]-last>=mid)
			{
				count++;
				last=a[i];
			}
		}
		if(count>=c)
		{
			return true;
		}
		return false;
	}

}
