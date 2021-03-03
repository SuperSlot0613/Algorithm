package StackAndQueues;

import java.util.Scanner;

public class DequeImplements {
	static class Deque{
		
		int a[];
		int n,front,rear;
		
		public Deque(int n) {
			this.n=n;
			a=new int[n];
			this.front=-1;
			this.rear=-1;
			
		}
		public void enquefront(int x) {
			// TODO Auto-generated method stub
			if((front==0&&rear==n-1)||(front==rear+1))
				System.out.println("Queue is Full");
			else if(front==-1&&rear==-1)
			{
				front=rear=0;
				a[front]=x;
			}
			else if(front==0)
			{
				front=n-1;
				a[front]=x;
			}
			else
			{
				front--;
				a[front]=x;
			}
			
		}
		void enquerear(int x)
		{
			if((front==0&&rear==n-1)||(front==rear+1))
				System.out.println("Queue is full");
			else if(front==-1&&rear==-1)
			{
				front=rear=0;
				a[rear]=x;
			}
			else if(rear==n-1)
			{
				rear=0;
				a[rear]=x;
			}
			else
			{
				rear++;
				a[rear]=x;
			}
		}
		void Display()
		{
			int i=front;
			while(i!=rear)
			{
				System.out.print(a[i]+" ");
				i=(i+1)%n;
			}
			System.out.println(a[rear]+" ");
			System.out.println("<------------------------>");
		}
		void getFront()
		{
			if(front==-1&&rear==-1)
				System.out.println("Queue is empty");
			System.out.println(a[front]);
		}
		void dequeufront()
		{
			if(front==-1&&rear==-1)
				System.out.println("Queue is empty");
			else if(front==rear)
			{
				System.out.println(a[front]+" deleted");
				System.out.println("<------------------------>");
				front=rear=-1;
			}
			else if(front==n-1)
			{
				System.out.println(a[front]+" deleted");
				System.out.println("<------------------------>");
				front=0;
			}
			else
			{
				System.out.println(a[front]+" deleted");
				System.out.println("<------------------------>");
				front++;
			}
		}
		void dequeurear()
		{
			if(front==-1&&rear==-1)
				System.out.println("Queue is empty");
			else if(front==rear)
			{
				System.out.println(a[front]+" deleted");
				System.out.println("<------------------------>");
				front=rear=-1;
			}
			else if(rear==0)
			{
				System.out.println(a[rear]+" deleted");
				System.out.println("<------------------------>");
				rear=n-1;
				
			}
			else
			{
				System.out.println(a[rear]+" deleted");
				System.out.println("<------------------------>");
				rear--;
			}
		}
	}


	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		Deque de=new Deque(n);
		 de.enquefront(1);
		 de.enquefront(10);
		 de.enquefront(16);
		 de.Display();
		 de.enquerear(18);
		 de.enquerear(17);
		 de.Display();
		 de.dequeufront();
		 de.Display();
		 de.dequeurear();
		 de.Display();
		 
		
	}

}
