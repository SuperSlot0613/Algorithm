package HashMAp;

import java.util.HashMap;
import java.util.Scanner;
import java.util.Set;

public class FIrstHash {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String str=sc.next();
		HashMap<Character,Integer> map=new HashMap<Character,Integer>();
		//Store the frequency of all character in the hashmap
		for(int i=0;i<str.length();i++)
		{
			char ch=str.charAt(i);
			if(map.containsKey(ch))
			{
				int val=map.get(ch);
				map.put(ch, val+1);
			}
			else
				map.put(ch, 1);
		}
		//The keySet function basically give all the key which is present in the
//		HashMap and store in the set
		Set<Character> keyset=map.keySet();
		int maxFreq=Integer.MIN_VALUE;
		char maxchar=' ';
		for(char key:keyset)
		{
			if(map.get(key)>maxFreq)
			{
				maxFreq=map.get(key);
				maxchar=key;
			}
		}
		System.out.println("The Character "+maxchar+" is present in the string "+maxFreq);
		
		
		

	}

}
  