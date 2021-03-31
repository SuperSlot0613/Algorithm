package SortingSearching;

import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class JobScgeduling {
	
	static class job{
		int start,finish,profit;
		job(int start,int finish,int profit)
		{
			this.start=start;
			this.finish=finish;
			this.profit=profit;
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		job a[]=new job[n];
		for(int i=0;i<n;i++)
		{
			a[i]=new job(sc.nextInt(),sc.nextInt(),sc.nextInt());
		}
		final Comparator<job> arrayComparator=new Comparator<job>() {

			@Override
			public int compare(job a, job b) {
				// TODO Auto-generated method stub
				return a.finish < b.finish ? -1 : a.finish == b.finish ? 0 : 1;
			}
		
		};
		Arrays.sort(a, arrayComparator);
		System.out.println(Schedule(a,n));

	}

	private static int Schedule(job[] a, int n) {
		// TODO Auto-generated method stub
		int total[]=new int[n];
		total[0]=a[0].profit;
		
		for(int i=1;i<n;i++)
		{
			int incl=a[i].profit;
			int l=BinarySearch(a,i);
			if(l!=-1)
			{
				incl+=total[l];
			}
			total[i]=Math.max(incl,total[l]);
		}
		return total[n-1];
	}

	private static int BinarySearch(job[] a, int i) {
		// TODO Auto-generated method stub
		int lo=0,hi=i-1;
		while(lo<=hi)
		{
			int mid=(lo+hi)/2;
			
			if(a[mid].finish<=a[i].start)
			{
				if(a[mid+1].finish<=a[i].start)
					lo=mid+1;
				else
					return mid;
			}
			else
				hi=mid-1;
		}
		return -1;
	}


}
