package StackAndQueues;

import java.util.Scanner;

public class KqueueInaArray {
	
	static class Queue{
		
		int n,free,k;
		int front[],next[],rear[],arr[];
		
		Queue(int n,int k)
		{
			this.n=n;
			this.k=k;
			front=new int[k];
			rear=new int[k];
			next=new int[n];
			arr=new int[n];
			for(int i=0;i<k;i++)
				front[i]=rear[i]=-1;
			for(int i=0;i<n;i++)
				next[i]=i+1;
			next[n-1]=-1;
		}

		public void enqueue(int item, int kn) {
			// TODO Auto-generated method stub
			if(isFull(kn))
			{
				System.out.println("Queue is full");
				return;
			}
			
			int nextindex=next[free];
			
			if(isEmpty(kn))
			{
				front[kn]=rear[kn]=free;
			}
			else
			{
				next[rear[kn]]=free;
				rear[kn]=free;
			}
			next[free]=-1;
			
			arr[free]=item;
			
			free=nextindex;
			System.out.println(item+" is added on "+kn);
			System.out.println("<------------------------>");
			
		}

		private boolean isEmpty(int kn) {
			// TODO Auto-generated method stub
			return front[kn]==-1;
		}

		private boolean isFull(int kn) {
			return free==-1;
		}

		public void dequeue(int i) {
			// TODO Auto-generated method stub
			if(isEmpty(i))
			{
				System.out.println("Oueue is Empty");
				return;
			}
			
			int frontindex=front[i];
			
			front[i]=next[frontindex];
			
			next[frontindex]=free;
			
			free=frontindex;
			
			System.out.println(arr[frontindex]+" is deleted from "+i);
			System.out.println("<------------------------>");
			
		}

		public void Display(int m) {
			// TODO Auto-generated method stub
			
			int i=front[m],j=rear[m];
			System.out.println("Queue number is "+m);
			while(i!=j)
			{
				System.out.print(arr[i]+" ");
				i=next[i];
			}
			System.out.print(arr[j]+" ");
			System.out.println("\n<------------------------>");
			
		}
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int k=sc.nextInt();
		Queue qe=new Queue(n,k);
		qe.enqueue(1, 0);
		qe.enqueue(2, 0);
		qe.enqueue(3, 0);
		qe.Display(0);
		qe.enqueue(9, 1);
		qe.enqueue(2, 1);
		qe.enqueue(6, 1);
		qe.Display(1);
		qe.enqueue(10,2);
		qe.enqueue(3, 2);
		qe.enqueue(4, 2);
		qe.Display(2);
		qe.enqueue(9, 3);
		qe.enqueue(2, 3);
		qe.enqueue(6, 3);
	//	qe.enqueue(6, 3);
		qe.Display(3);
		qe.dequeue(0);
		qe.dequeue(0);
		qe.Display(0);
		qe.dequeue(1);
		qe.dequeue(1);
		qe.Display(1);
		qe.dequeue(2);
		qe.dequeue(2);
		qe.Display(2);
		qe.dequeue(3);
		qe.dequeue(3);
		qe.Display(3);

	}

}
