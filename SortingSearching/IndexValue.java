package SortingSearching;

import java.util.Scanner;

public class IndexValue {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		Index(a,0,n-1);

	}

	private static void Index(int[] a, int l, int r) {
		// TODO Auto-generated method stub
		if(l>r)
			return;
		int mid=(l+r)/2;
		if(a[mid]==mid+1)
			System.out.println(mid+1);
		Index(a,l,mid-1);
		Index(a,mid+1,r);
		
	}

}
