import java.util.Scanner;

public class SudokuProblem {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int board[][]=new int[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				board[i][j]=sc.nextInt();
		System.out.println();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				System.out.print(board[i][j]+" ");	
			}
			System.out.print("\n");
		}
		System.out.println();
		System.out.println("<--------------------->");
		System.out.println();
		Sudoku(board,0,0);

	}
	static void Sudoku(int[][] board,int i,int j)
	{
		if(i==board.length)
		{
			Display(board);
			return;	
		}
		int ni=0;
		int nj=0;
		if(j==board[0].length-1)
		{
			ni=i+1;
			nj=0;
		}
		else
		{
			ni=i;
			nj=j+1;
		}
		if(board[i][j]!=0)
			Sudoku(board,ni,nj);
		else
		{
			for(int po=1;po<=9;po++)
			{
				if(Isvalid(board,i,j,po)==true)
				{
					board[i][j]=po;
					Sudoku(board,ni,nj);
					board[i][j]=0;
				}
			}
		}
			
	}
	static boolean Isvalid(int[][] board,int x,int y,int val)
	{
		for(int j=0;j<board[0].length;j++)
			if(board[x][j]==val)
				return false;
		for(int i=0;i<board.length;i++)
			if(board[i][y]==val)
				return false;
		int smi=x/3*3;
		int smj=y/3*3;
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
				if(board[smi+i][smj+j]==val)
					return false;
		return true;
	}
	static void Display(int[][] board)
	{
		for(int i=0;i<board.length;i++)
		{
			for(int j=0;j<board.length;j++)
			{
				System.out.print(board[i][j]+" ");	
			}
			System.out.print("\n");
		}
	}

}
