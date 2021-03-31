package SortingSearching;

import java.util.Arrays;
import java.util.Scanner;

public class FindMaxi {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		Arrays.sort(a);
		int i=5,sum=0;
		while(i>=0)
		{
			sum=sum+a[i];
			i-=2;
		}
		System.out.println(sum);

	}

}
