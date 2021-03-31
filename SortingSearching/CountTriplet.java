package SortingSearching;

import java.util.Arrays;
import java.util.Scanner;

public class CountTriplet {
    static int total=0;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int x=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		int sum=0;
	//	CountSum(a,n,x,0,sum);
	//	System.out.println(total);
		Arrays.sort(a);
		for(int i=0,j=i+1;i<n-1&&j<n-1;j++)
		{
			first:
			for(int k=j+1;k<n;k++)
			{
				if((sum+a[i]+a[j]+a[k])==x)
				{
					total++;
					break first;
				}
			}
		}
		System.out.println(total);

	}

	private static void CountSum(int[] a, int n, int x, int i,int sum) {
		// TODO Auto-generated method stub
		if(sum==x)
		{
			total++;
			return;
		}
		if(i>n)
			return;
		if(i+1%3==0)
			return;

		
		for(int j=i;j<n;j++)
		{
			sum=sum+a[i];
			CountSum(a,n,x,j+1,sum);
			sum=sum-a[i];
		}
		
	}

}
