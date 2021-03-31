package SortingSearching;

import java.util.Arrays;
import java.util.Scanner;

public class PairFinding {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
			int l=sc.nextInt(),d=sc.nextInt();
			int a[]=new int[l];
			boolean ca=false;
			for(int i=0;i<l;i++)
			{
				a[i]=sc.nextInt();
			}
			Arrays.sort(a);
			for(int i=0;i<l;i++)
			{
				int num=a[i]+d;
				if(pairSearch(i+1,a,l-1,num))
					ca=true;
			}
			if(ca)
				System.out.println(1);
			else
				System.out.println(-1);
				
		}

	}

	private static boolean pairSearch(int l, int[] a, int r, int num) {
		// TODO Auto-generated method stub
		while(l<=r)
		{
			int mid=(l+r)/2;
			
			if(a[mid]==num)
				return true;
			if(a[mid]>num)
				r=mid-1;
			if(a[mid]<num)
				l=mid+1;
		}
		return false;
	}

}
