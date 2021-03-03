import java.util.Scanner;

public class SieveAlgorithm {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int primes[]=new int[n+1];
		for(int i=2;i<=n;i++)
		{
			if(primes[i]==0)
			{
				for(int j=i*i;j<=n;j+=i)
				{
					primes[j]=1;
				}
			}
		}
		for(int i=2;i<=n;i++)
		{
			if(primes[i]==0)
				System.out.print(i+" ");
		}

	}

}
