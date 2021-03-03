package StackAndQueues;

import java.util.Scanner;

public class CreationOfKstack {

	
	static class Kstack
	{
		int arr[];//To store the value
		int top[];//to store the top element of undex of every stack
		
		int next[];//to give the next free space of array
		int free;
		int n,k;
		
		Kstack(int k1,int n1)
		{
			k=k1;
			n=n1;
			arr=new int[n];
			top=new int[k];
			next=new int[n];
			
			for(int i=0;i<k;i++)
				top[i]=-1;
			for(int i=0;i<n;i++)
				next[i]=i+1;
			next[n-1]=-1;//-1 is show the list is empty
			free=0;
		}
		boolean isFull()
		{
			return(free==-1);
		}
		
		void push(int item,int sn)
		{
			if(isFull())
			{
				System.out.println("Stack is full");
				return;
			}
			
			int i=free;// Store index of first free slot
			
			free=next[i];// Update index of free slot to index of next slot in free list 
			next[i]=top[sn];// Update next of top and then top for stack number 'sn'
			top[sn]=i;
			arr[i]=item;// Put the item in array
		}
		
		
		boolean isEmpty(int sn)
		{
			return(top[sn]==-1);
		}
		
	      // To pop an from stack number 'sn' where sn is from 0 to k-1 
        int pop(int sn)  
        { 
            // Underflow check 
            if (isEmpty(sn))  
            { 
                System.out.println("Stack Underflow"); 
                return Integer.MAX_VALUE; 
            } 
  
            // Find index of top item in stack number 'sn' 
            int i = top[sn]; 
  
            top[sn] = next[i]; // Change top to store next of previous top 
  
            // Attach the previous top to the beginning of free list 
            next[i] = free; 
            free = i; 
  
            // Return the previous top item 
            return arr[i]; 
        }
		
		
		
		
		
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int k=sc.nextInt();
		Kstack st=new Kstack(k,n);
		
		st.push(20, 2);
		st.push(30, 2);
		st.push(40, 1);
		System.out.println(st.pop(2));

	}
	
}
