package Recursion;

import java.util.ArrayList;
import java.util.Scanner;
import java.util.Vector;

public class Anagram {
	static Vector<String> v1=new Vector<>();

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		Vector<String> v=new Vector<>();
		for(int i=0;i<n;i++)
		{
			v.addElement(sc.next());
		}
		v1=v;
		System.out.println("Anagram of Given List "+v1);
		System.out.println("<------------------------>");
		for(int i=0;i<v.size();i++)
		{
			String ch=v.get(i);
			String perm="";
			if(v1.contains(ch))
			{
				System.out.print("[");
				Anagram2(ch,perm,v1);
				System.out.print("]");
			}
			System.out.println();
		}

	}

	private static void Anagram2(String ch, String perm,Vector<String> v1) {
		// TODO Auto-generated method stub
		if(ch.length()==0)
		{
		   if(v1.contains(perm))
		   {
			 System.out.print(perm+" ,");
			 v1.remove(perm);
		   }
		   return;
		}
		for(int i=0;i<ch.length();i++)
		{
			char c=ch.charAt(i);
			String ros=ch.substring(0,i)+ch.substring(i+1);
			Anagram2(ros,perm+c,v1);
		}
		
	}

}
