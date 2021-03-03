import java.util.LinkedList;
import java.util.Scanner;

public class ReorderThelinked {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		LinkedList<Integer> ll=new LinkedList<Integer>();
		for(int i=0;i<n;i++)
		{
			ll.add(sc.nextInt());
		}
		int mid=n/2;
		LinkedList<Integer> ll2=new LinkedList<Integer>();
		for(int i=0,j=n-1;i<=mid;i++,j--)
		{
			ll2.add(ll.get(i));
			if(j>mid)
				ll2.add(ll.get(j));
		}
		for(int i=0;i<n;i++)
		{
			System.out.print(ll2.get(i)+"->");
		}

	}

}
