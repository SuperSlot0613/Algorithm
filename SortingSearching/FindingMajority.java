package SortingSearching;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

public class FindingMajority {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		HashMap<Integer,Integer> hs=new HashMap<Integer,Integer>();
		int count=0,num=0;
		for(int i=0;i<n;i++)
		{
			if(hs.isEmpty())
			{
				hs.put(a[i],1);
			}
			else if(hs.containsKey(a[i]))
			{
				hs.put(a[i],hs.get(a[i])+1);
				count=hs.get(a[i]);
				num=a[i];
			}
			else
			{
				hs.put(a[i], 1);
			}
		}
		
		if(count>n/2)
			System.out.println(num);
		else
			System.out.println(-1);

	}

}
