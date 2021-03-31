package SortingSearching;

import java.util.ArrayList;
import java.util.Collections;
import java.util.*;
import java.util.Scanner;
import java.util.concurrent.ThreadLocalRandom;


public class QuikSort {
	static ArrayList<Integer> arr= new ArrayList<Integer>();
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		//ArrayList<Integer> arr= new ArrayList<Integer>();
		for(int i=0;i<n;i++)
			arr.add(sc.nextInt());
		Sort(arr,0,n-1);
		System.out.println(arr);

	}

	private static void Sort(ArrayList<Integer> arr, int left, int right) {
		// TODO Auto-generated method stub
		if(left>=right)
			return;
		int pivot_index=partition(arr,left,right);
		Sort(arr,left,pivot_index-1);
		Sort(arr,pivot_index+1,right);
		return;
	}

	private static int partition(ArrayList<Integer> arr, int left, int right) {
		// TODO Auto-generated method stub
		int m=left;
		int pivot_index=ThreadLocalRandom.current().nextInt(left,right);//getting the random index to make it pivot element
		int pivot=arr.get(pivot_index);
		Collections.swap(arr, pivot_index, right);//put the pivot element to the last index
		for(int i=left;i<right;i++)
		{
			if(arr.get(i)<=pivot)
			{
				Collections.swap(arr, m, i);//swap the small element to the m index element
				m++;
			}
		}
		
		Collections.swap(arr, m, right);//put the pivot element at there own position
		return m;
	}

}
//Time complexity in average case is O(nlogn);
//without using random index the worst case is O(n^2)
