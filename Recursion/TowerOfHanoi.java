import java.util.Scanner;

public class TowerOfHanoi {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		doTower(n,'A','B','C');

	}
	static void doTower(int n,char from,char inter,char to)
	{
		if(n==1)
		{
			System.out.println("Disk 1 from " +from+ " to " +to);
		}
		else
		{
			doTower(n-1,from,to,inter);
			System.out.println("Disk "+ n +" from " +from+ " to "+to);
			doTower(n-1,inter,from,to);
		}
			
	}

}
