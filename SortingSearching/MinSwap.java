package SortingSearching;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class MinSwap {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		ArrayList<Integer> arr=new ArrayList<Integer>();
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
			arr.add(a[i]);
		}
		System.out.println(arr.indexOf(3));
		int total=0,j=0;
		for(int i=0;i<n;i++)
		{
			j=i+1;
			
		}
		for(int i=0;i<n-1;i++)
		{
			int num=Arrays.stream(a, i+1, n).min().getAsInt();
			if(a[i]>num)
			{
				int temp=a[i];
				a[i]=a[arr.indexOf(num)];
				a[arr.indexOf(num)]=temp;
				total++;
			}
		}
		for(int i=0;i<n;i++)
			System.out.println(a[i]);
		System.out.println(total);

	}

}
