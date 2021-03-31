package SortingSearching;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class SortingCountBit {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		List<Integer> arr=new ArrayList<Integer>(n);
		for(int i=0;i<n;i++)
			arr.add(sc.nextInt());
		Rearange(arr);
		System.out.println(arr.toString());
		

	}

	private static List<Integer> Rearange(List<Integer> arr) {
		// TODO Auto-generated method stub
		Collections.sort(arr, new Comparator<Integer>(){
			
			@Override
			public int compare(Integer o1, Integer o2) {
				// TODO Auto-generated method stub
				int result=0;
				if(o1==o2)
					result=0;
				else if(Integer.bitCount(o1)>Integer.bitCount(o2))
					result=-1;
				else if(Integer.bitCount(o1)>Integer.bitCount(o2))
					result= 1;
				else if(Integer.bitCount(o1)==Integer.bitCount(o2))
					result=(o1<o2)?-1:1;
				return result;
			}
		});
				
		return arr;		
	}

}
