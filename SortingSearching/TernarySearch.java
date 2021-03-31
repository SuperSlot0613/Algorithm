package SortingSearching;

import java.util.Scanner;

public class TernarySearch {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		int target=sc.nextInt();
		System.out.println(Search(a,target));

	}

	private static int Search(int[] a, int target) {
		// TODO Auto-generated method stub
		int l=0,r=a.length-1;
		while(l<=r)
		{
			int m1=l+(r-l)/3;//m1=l+n/3 where n=r-l;
			int m2=r-(r-l)/3;//m2=r-n/3 where n=r-l;
			if(a[m1]==target)
				return m1;
			if(a[m2]==target)
				return m2;
			if(target<a[m1])
			{
				r=m1-1;
			}
			else if(target>a[m2])
				l=m2+1;
			else
			{
				l=m1+1;
				r=m2-1;
			}
		}
		
		return -1;
		
	}

}
