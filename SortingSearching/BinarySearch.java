package SortingSearching;

import java.util.Scanner;

public class BinarySearch {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double start=System.currentTimeMillis();
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		int data=sc.nextInt();
		Search(a,0,n-1,data);
		double end=System.currentTimeMillis();
		System.out.println("Executed Time "+(end-start)/1000+" ms");

	}

	private static void Search(int[] a, int l, int r, int data) {
		// TODO Auto-generated method stub
		if(l>r)
			return;
		int mid=(l+r)/2;
		if(a[mid]==data)
			System.out.println(data+" is found at "+mid);;
		if(a[mid]<data)
			Search(a,mid+1,r,data);
		if(a[mid]>data)
			Search(a,l,mid-1,data);
		
	}

}
