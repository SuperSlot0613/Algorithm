import java.util.Scanner;
import java.util.Vector;



public class RateInMaze {
	static int totalpath=0;
	static String ofc="";

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int grid[][]=new int[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				grid[i][j]=sc.nextInt();
		}
		Maze(grid);
		//System.out.println(Maze(grid));
		

	}
	static boolean IsSafe(int i,int j,int n,int [][]visited)
	{
		return (i>=0 && j>=0&&i<n&&j<n&&visited[i][j]==0);
	}
	static void Helper(int i,int j,int n,int[][] grid,int[][] visited,String ofc)
	{
		if(i==n-1&&j==n-1)
		{
			totalpath++;
			System.out.println(ofc);
			ofc="";
			return;
		}
		if(!IsSafe(i,j,n,visited))
			return;
		visited[i][j]=1;
		if(i-1>=0&&grid[i][j]==0)//up move
			Helper(i-1,j,n,grid,visited,ofc+"U");
		if(i+1<n&&grid[i][j]==0)//down move
			Helper(i+1,j,n,grid,visited,ofc+"D");
		if(j+1<n&&grid[i][j]==0)//right  move
			Helper(i,j+1,n,grid,visited,ofc+"R");
		if(j-1>=0&&grid[i][j]==0)//left move
			Helper(i,j-1,n,grid,visited,ofc+"L");
		visited[i][j]=0;
		return;	
		
	}
	static int Maze(int[][] grid)
	{
		int n=grid.length;
		int visited[][]=new int[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				visited[i][j]=0;
		Helper(0,0,n,grid,visited,ofc);
		return totalpath;	
	}

}
