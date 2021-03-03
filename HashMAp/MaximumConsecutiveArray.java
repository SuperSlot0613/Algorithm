package HashMAp;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class MaximumConsecutiveArray {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		System.out.println(LCM(a)+"\n"+LCM(a).size());

	}

	private static ArrayList<Integer> LCM(int[] a) {
		// TODO Auto-generated method stub
		HashMap<Integer,Boolean> map=new HashMap<Integer,Boolean>();
		for(int i=0;i<a.length;i++)
		{
//			Checking the n-1 element is present in Hashmap or not
//			If it does , then the current elemnet is not start of hasmap
			int no1=a[i]-1;
			if(map.containsKey(no1))
			{
				map.put(a[i], false);
			}
			else
				map.put(a[i], true);
//			If current number is start of sequence then n+1 cannot be start of sequence
			int no2=a[i]+1;
			if(map.containsKey(no2))
			{
				map.put(no2, false);
			}
		}
		
		ArrayList<Integer> keys=new ArrayList<Integer>(map.keySet());
		int maxlength=Integer.MIN_VALUE;
		int maxStartno=0;
		
		for(int key:keys)
		{
			if(map.get(key)==true)
			{
				int pstartno=key;
				int count=0;
				while(map.containsKey(pstartno+count))
					count++;
				
				if(count>maxlength)
				{
					maxlength=count;
					maxStartno=pstartno;
				}
				
			}
		}
		ArrayList<Integer> mr=new ArrayList<Integer>();
		for(int i=0;i<maxlength;i++)
		{
			mr.add(maxStartno+i);
		}
		return mr;
	}

}
