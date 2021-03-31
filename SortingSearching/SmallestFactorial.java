package SortingSearching;

import java.util.Scanner;

public class SmallestFactorial {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		System.out.println(Factorial(n));
		

	}

	private static int Factorial(int n) {
		// TODO Auto-generated method stub
		if(n==1)
			return 5;
		int lo=0;
		int hi=5*n;
		while(lo<hi)
		{
			int mid=(lo+hi)/2;
			
			if(check(mid,n))
			{
				hi=mid;
			}
			else
			{
				lo=mid+1;
			}
		}
		return lo;
	}

	private static boolean check(int mid, int n) {
		// TODO Auto-generated method stub
		int temp=mid,count=0,f=5;
		while(f<=temp)
		{
			count+=temp/f;
			f=f*5;
		}
		return (count>=n);
	}

}
