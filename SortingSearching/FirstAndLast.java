package SortingSearching;

import java.util.Scanner;

public class FirstAndLast {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		int num=sc.nextInt();
		BinaryFirst(a,0,n-1,num);

	}

	private static void BinaryFirst(int[] a, int l, int r, int num) {
		// TODO Auto-generated method stub
		if(l>r)
			return;
		int mid=(l+r)/2;
		if(a[mid]==num)
		{
			if(a[mid-1]!=num&&a[mid+1]!=num)
				System.out.println(mid);
			else
			{
			    if(a[mid-1]!=num)
					System.out.println(mid);
				else if(a[mid-1]==num)
				{
					BinaryFirst(a,l,mid-1,num);
					if(a[mid-1]!=num)
						System.out.println(mid);
					//return;
				}
				if(a[mid+1]!=num)
					System.out.println(mid);
				else if(a[mid+1]==num)
				{
					BinaryFirst(a,mid+1,r,num);
					if(a[mid+1]!=num)
						System.out.println(mid);
					//return;
				}
			}
			
		}
		else if(a[mid]>num)
			BinaryFirst(a,l,mid-1,num);
		else
			BinaryFirst(a,mid+1,r,num);
		
	}

}
