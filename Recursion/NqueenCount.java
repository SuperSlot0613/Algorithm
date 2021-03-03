import java.util.Scanner;

public class NqueenCount {
	static int count=0;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double start=System.currentTimeMillis();
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		boolean[][] grid=new boolean[n][n];
		countQueen(grid,0,n);
		System.out.println(count);
		double end=System.currentTimeMillis();
		System.out.println("Executed Time "+(end-start)/1000+" ms");

	}
	static void Display(boolean[][] grid,int n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(grid[i][j])
					System.out.print("Q ");
				else
					System.out.print(". ");
			}
			System.out.print("\n");
		}
		
	}
	static boolean Issafe(boolean[][] grid,int row,int col,int n)
	{
		for(int i=row-1;i>=0;i--)//column check
			if(grid[i][col])
				return false;
		for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--)//left check
			if(grid[i][j])
				return false;
		for(int i=row-1,j=col+1;i>=0&&j<n;i--,j++)//right check
			if(grid[i][j])
				return false;
		return true;
	}
	static void countQueen(boolean[][] grid,int curr_row,int n)
	{//current is using for pruning for same row
		if(curr_row==n)
		{
			count++;
			Display(grid,n);
			System.out.print("\n\n");
			return;
		}
		for(int i=0;i<n;i++)
		{
			if(Issafe(grid,curr_row,i,n))//check the position of new queen safe or not
			{
				grid[curr_row][i]=true;//this assign queen
				countQueen(grid,curr_row+1,n);
				grid[curr_row][i]=false;//Backtracking for when not find any count
			}
		}
	}

}

/*The time complexity of this programm is O(n!)
 * because the recurence relation is 
 * T(n)=n*T(n-1)+n^2;
 * n=come from the for loop in the countqueen and T(n-1) is call of other n-1 row
 * n^2=if come from issafe fuction the issafe function run on countqueen for loop therefore n^2
 */
