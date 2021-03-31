package SortingSearching;

import java.util.Scanner;

public class OptimumLocation {
	static int n;
	static int Eps=(int)(1e-6)+1;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt(),b=sc.nextInt(),c=sc.nextInt();//Enter the coefficient of Linear equestion ax+by+c=0
        Line l=new Line(a,b,c);
        n=sc.nextInt();
        int points[][]=new int[n][n];
        for(int i=0;i<n;i++)
        {
        	points[i][0]=sc.nextInt();
        	points[i][1]=sc.nextInt();
        }
        
        System.out.println(Findingcost(points,l));
	}
	
	private static double Findingcost(int[][] points, Line l) {
		// TODO Auto-generated method stub
		Point p[]=new Point[n];//this store the all x,y points memory address
		
		for(int i=0;i<n;i++)
		{
			p[i]=new Point(points[i][0],points[i][1]); 
		}
		
		return FindingDist(p,l,n);
	}
	
	private static double FindingDist(Point[] p, Line l, int n) {
		// TODO Auto-generated method stub
		
		double low=-1e6;
		double hig=1e6;
		
		while((hig-low)>Eps)
		{
			double mid1=low+(hig-low)/3;
			double mid2=hig-(hig-low)/3;
			
			double dist1=compute(p,l,n,mid1);
			double dist2=compute(p,l,n,mid2);
			
			if(dist1<dist2)
			{
				hig=mid2;
			}
			else
			{
				low=mid1;
			}
		}
		return compute(p,l,n,(low+hig)/2);
	}

	private static double compute(Point[] p, Line l, int n, double X) {
		// TODO Auto-generated method stub
		double res=0;
		
		double Y=-1*(l.c+l.a*X)/l.b;
		
		for(int i=0;i<n;i++)
		{
			res+=dist(X,Y,p[i]);
		}
		return res;
	}

	private static double dist(double x, double y, Point p) {
		// TODO Auto-generated method stub
		return Math.sqrt(sq(x-p.x)+sq(y-p.y));
	}

	private static double sq(double d) {
		// TODO Auto-generated method stub
		return (d)*(d);
	}

	static class Point{
		
		int x,y;
		
		public Point(int x,int y)
		{
			this.x=x;
			this.y=y;
		}
	}

	static class Line{
		
		int a,b,c;
		
		public Line(int a,int b,int c)
		{
			this.a=a;
			this.b=b;
			this.c=c;
		}
	};

}
