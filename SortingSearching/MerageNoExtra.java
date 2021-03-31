package SortingSearching;

import java.util.Arrays;
import java.util.OptionalInt;
import java.util.Scanner;

public class MerageNoExtra {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Merge Without Extra Space
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int m=sc.nextInt();
		int a[]=new int[n];
		int b[]=new int[m];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		for(int i=0;i<n;i++)
			b[i]=sc.nextInt();
		int i=n-1;
		int j=0;
		while(i>=0 && j<m)
		{
			if(a[i]>=b[j])
			{
				a[i]=a[i]+b[j];
				b[j]=a[i]-b[j];
				a[i]=a[i]-b[j];
				i--;
				j++;
			}
			else
				break;
		}
		Arrays.sort(a);
		Arrays.sort(b);
		for(int k=0;k<n;k++)
			System.out.print(a[k]+" ");
		for(int k=0;k<m;k++)
			System.out.print(b[k]+" ");

	}

}
