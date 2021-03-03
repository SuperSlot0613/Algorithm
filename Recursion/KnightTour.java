import java.util.Scanner;

public class KnightTour {
 
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int[][] grid=new int[n][n];
		boolean[][] visited=new boolean[n][n];
		CountKnight(grid,n,0,0,0,visited);
	}
	static void CountKnight(int[][] grid,int n,int i,int j,int count,boolean[][] visited)
	{
		if(count==n*n-1)
		{
			grid[i][j]=count;
			Display(grid,n);
			System.out.print("\n\n");
			return;
		}
		if(count>=n*n)
			return;
		int[] xdir= {-2,-2,-1,-1,2,2,1,1};
		int[] ydir= {1,-1,2,-2,1,-1,2,-2};
		visited[i][j]=true;
		grid[i][j]=count;
		for(int k=0;k<8;k++)
		{
			if(IsSafe(i+xdir[k],j+ydir[k],n,visited))
			{
				CountKnight(grid,n,i+xdir[k],j+ydir[k],count+1,visited);
			}
		}
		grid[i][j]=-1;
		visited[i][j]=false;
	}
	static boolean IsSafe(int i,int j,int n,boolean [][]visited)
	{
		return (i>=0 && j>=0&&i<n&&j<n&&visited[i][j]==false);
	}
	static void Display(int[][] grid,int n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				System.out.print(grid[i][j]+" ");
			}
			System.out.print("\n");
		}
		
	}

}
