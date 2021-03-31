package SortingSearching;

import java.util.Scanner;

public class BishuAndSolider {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		int q=sc.nextInt();
		while(q-->0)
		{
			int p=sc.nextInt();
			int sum=0,count=0;
			for(int i=0;i<n;i++)
			{
				if(a[i]<=p)
				{
					sum=sum+a[i];
					count++;
				}
			}
			System.out.println(count+" "+sum);
		}

	}

}
