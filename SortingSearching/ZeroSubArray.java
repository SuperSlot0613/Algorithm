package SortingSearching;

import java.util.HashMap;
import java.util.Scanner;

public class ZeroSubArray {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		
		HashMap<Integer,Integer> hp=new HashMap<Integer,Integer>();
		int total=0,sum=0;
		hp.put(sum, 1);
		for(int i=0;i<n;i++)
		{
			sum=sum+a[i];
			
			if(hp.containsKey(sum))
			{
				total=total+hp.get(sum);
				hp.put(sum, hp.get(sum)+1);
			}
			else
			{
				hp.put(sum, 1);
			}
		}
		System.out.println(total);

	}

}
