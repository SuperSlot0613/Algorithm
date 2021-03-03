package HashMAp;

import java.util.HashMap;
import java.util.Scanner;

public class LongestSubstring {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String str=sc.next();
		int maxlength=Integer.MIN_VALUE;
		HashMap<Character,Integer> map=new HashMap<>();
		for(int i=0,j=0;j<str.length();j++)
		{
			char ch=str.charAt(j);
			if(map.containsKey(ch))
			{
				i=map.get(ch);
				map.put(ch,j+1);
				
			}
			else {
				map.put(ch,j+1);
				maxlength=j-i;
			}
		}
		System.out.println(maxlength+1);

	}

}
