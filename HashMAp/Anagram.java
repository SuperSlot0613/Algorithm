package HashMAp;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;
import java.util.Vector;

public class Anagram {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		ArrayList<String> s;
		for(int i=0;i<n;i++)
			s.add(sc.next());
		HashMap<String,ArrayList<String>> map=new HashMap<>();
		for(int i=0;i<n;i++)
		{
			ArrayList<String> str=(ArrayList<String>)s.get(i);
			char charr[]=s.get(i).toCharArray();
			Arrays.sort(charr);
			String ch=charr.toString();
			if(map.containsKey(ch))
			{
				map.put(ch,(String)str);
			}
			
		}

	}

}
