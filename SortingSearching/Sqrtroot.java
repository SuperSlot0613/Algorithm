package SortingSearching;

import java.util.Scanner;

public class Sqrtroot {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int sq=sc.nextInt();
		int low=0,high=50;
		Solve(sq,low,high);

	}

	private static void Solve(int sq, int low, int high) {
		// TODO Auto-generated method stub
		if(low>high)
			return;
		int mid=(low+high)/2;
		if(mid*mid==sq)
			System.out.println(mid);
		if(mid*mid<sq)
			Solve(sq,mid+1,high);
		if(mid*mid>sq)
			Solve(sq,low,mid-1);
		
	}

}
