import java.util.Scanner;

public class RuukPosition {
    static int count=0;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		boolean grid[][]=new boolean[n][n];
		boolean[][] visited=new boolean[n][n];
		countRuuk(grid,0,n);
		System.out.println(count);
	}
	static void countRuuk(boolean[][] grid,int curr,int n)
	{
		if(curr==n)
		{
			count++;
			Display(grid,n);
			System.out.print("\n\n");
			return;
		}
		for(int i=0;i<n;i++)
		{
			if(Isitsafe(grid,curr,i,n))
			{
				grid[curr][i]=true;
				countRuuk(grid,curr+1,n);
				grid[curr][i]=false;
			}
				
		}
	}
	static boolean Isitsafe(boolean[][] grid,int row,int col,int n)
	{
		for(int i=row-1;i>=0;i--)
			if(grid[i][col])
				return false;
		return true;
	}
	static void Display(boolean[][] grid,int n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(grid[i][j])
					System.out.print("R ");
				else
					System.out.print(". ");
			}
			System.out.print("\n");
		}
	}

}
