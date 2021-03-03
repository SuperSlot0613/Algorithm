import java.util.LinkedHashSet;
import java.util.Scanner;

public class StringPermutation {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String s=sc.next();
		String perm="";
		Test2 te=new Test2();
		te.Permutation(s, perm);

	}

}
class Test2
{
	void Permutation(String s,String perm)
	{
		if(s.length()==0)
		{
			System.out.println(perm);
			return;
		}
		LinkedHashSet se=new LinkedHashSet();
		for(int i=0;i<s.length();i++)
		{
		    char ch=s.charAt(i);
			String ros=s.substring(0,i)+s.substring(i+1);
			se.add(ch);
			Permutation(ros,perm+ch);
		}
		
	}
}
