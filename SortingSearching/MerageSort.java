package SortingSearching;

import java.util.ArrayList;
import java.util.Scanner;
import java.util.Vector;

public class MerageSort {
  //  static int[] b;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		a=merage(a);
		System.out.println("Sorted array");
		for(int i:a)
			System.out.print(i+" ");
		
	}
	
	
	static int[] merage(int[] a)
	{
		if(a.length<=1)
			return a;
		int mid=a.length/2;
		int[] left=new int[mid];
		int[] right;
		if(a.length%2==0)
			right=new int[mid];
		else
			right=new int[mid+1];
		
		for(int i=0;i<mid;i++)
			left[i]=a[i];
		for(int i=0;i<right.length;i++)
			right[i]=a[mid+i];
		int[] result=new int[a.length];
		
		left=merage(left);
		right=merage(right);
		result=Meragesort(left,right);
		
		return result;
	
	}


	private static int[] Meragesort(int[] left, int[] right) {
		// TODO Auto-generated method stub
		int[] result=new int[left.length+right.length];
		int i=0,j=0,k=0;
		
		while(i<left.length&&j<right.length)
		{
			if(left[i]<=right[j])
			{
				result[k]=left[i];
				i++;
			}
			else
			{
				result[k]=right[j];
				j++;
			}
			k++;
		}
		while(i<left.length)
		{
			result[k]=left[i];
			i++;
			k++;
		}
		while(j<right.length)
		{
			result[k]=right[j];
			j++;
			k++;
		}
		return result;
	}

}
