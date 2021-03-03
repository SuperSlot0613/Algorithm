package StackAndQueues;

import java.util.Scanner;

public class CiculerQueue {
	
	static class Queue{
		
		int n,front,rear;
		int arr[];

		public Queue(int n) {
			this.n=n;
			front=-1;
			rear=-1;
			arr=new int[n];
		}

		public void enqueue(int x) {
			// TODO Auto-generated method stub
			if(isFull())
			{
				System.out.println("Queue is full");
				return;	
			}
			else if(front==-1)
			{
				front=rear=0;
				arr[front]=x;
				System.out.println(x+" is added ");
				System.out.println("<-------------------------->");
			}
			else
			{
				rear=(rear+1)%n;
				arr[rear]=x;
				System.out.println(x+" is added ");
				System.out.println("<-------------------------->");
			}
		}

		private boolean isFull() {
			// TODO Auto-generated method stub
			return ((front==0&&rear==n-1)||(front==rear+1));
		}

		public void dequeue() {
			// TODO Auto-generated method stub
			if(isEmpty())
			{
				System.out.println("Queue is empty");
			}
			else if(front==rear)
			{
				System.out.println(arr[front]+" is deleted ");
				System.out.println("<-------------------------->");
				front=rear=-1;
			}
			else
			{
				System.out.println(arr[front]+" is deleted");
				System.out.println("<-------------------------->");
				front=(front+1)%n;
			}
			
		}

		private boolean isEmpty() {
			// TODO Auto-generated method stub
			return (front==-1&&rear==-1);
		}

		public void Display() {
			// TODO Auto-generated method stub
			int i=front,j=rear;
			while(i!=j)
			{
				System.out.print(arr[i]+" ");
				i=(i+1)%n;
			}
			System.out.print(arr[j]+" ");
			
		}
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		Queue qe=new Queue(n);
		qe.enqueue(10);
		qe.enqueue(11);
		qe.enqueue(12);
		qe.enqueue(13);
		qe.Display();
		qe.dequeue();
		qe.Display();
		qe.dequeue();
		qe.Display();
		qe.enqueue(16);
		qe.enqueue(15);
		qe.Display();
	}

}
