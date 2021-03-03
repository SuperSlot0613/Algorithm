import java.util.Scanner;

public class Laxcio {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt(),i=0;
		Test te=new Test();
		te.LaxcioOrder(n, i);
		

	}

}
class Test
{
	void LaxcioOrder(int n,int i)
	{
		if(i>n)
			return;
		System.out.println(i);
		for(int j=(i==0)?1:0;j<=9;j++)
			LaxcioOrder(n,10*i+j);
	}
}
