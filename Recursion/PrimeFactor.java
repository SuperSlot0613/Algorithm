import java.util.Scanner;

public class PrimeFactor {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int spf[]=new int[n+1];
		for(int i=2;i<=n;i++)
			spf[i]=i;
		for(int i=2;i<=n;i++)
		{
			if(spf[i]==i)
				for(int j=i*i;j<=n;j+=i)
				{
					if(spf[j]==j)
						spf[j]=i;
				}
		}
		while(n!=1)
		{
			System.out.println(spf[n]);
			n=n/spf[n];
		}

	}

}
