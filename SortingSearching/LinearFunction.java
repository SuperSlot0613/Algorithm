package SortingSearching;

import java.util.Scanner;

public class LinearFunction {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double start=System.currentTimeMillis();
		Scanner sc=new Scanner(System.in);
		int x = 0,y;
		y=3*x+7;
		Search(y,0,100,73);//find the number which put on the x give 73
		double end=System.currentTimeMillis();
		System.out.println("Executed Time "+(end-start)/1000+" ms");

	}

	private static void Search(int y, int l, int r,int data) {
		// TODO Auto-generated method stub
		if(l>r)
			return;
		int mid=(l+r)/2;
		if((3*mid+7)==data)
			System.out.println(data+" is found at "+mid);
		if((3*mid+7)<data)
			Search(y,mid+1,r,data);
		if((3*mid+7)>data)
			Search(y,l,mid-1,data);
	}

}
