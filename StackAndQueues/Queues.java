package StackAndQueues;

public class Queues {
	
	int[] data;
	int front;
	int size;
	
	public Queues()
	{
		data=new int[5];
		front=0;
		size=0;
	}
	
	public boolean isEmpty()
	{
		return size==0;
	}
	public boolean isFull()
	{
		return size==data.length;
	}
	
	public void enqueues(int item)
	{
		if(isFull())
			return;
		int idx=(front+size)%data.length;
		data[idx]=item;
		size++;
	}
	
	public int dequeues()
	{
		if(isEmpty())
			return 0;
		int item=data[front];
		data[front]=0;
		front=(front+1)%data.length;
		size--;
		
		return item;
	}
	
	public int getFront()
	{
		if(isEmpty())
			return 0;
		int item=data[front];
		return item;
	}
	
	public void Display()
	{
		System.out.println("-----------------");
		
		for(int i=front;i<front+size;i++)
		{
			System.out.print(data[i%data.length]+" ");
		}
		System.out.println();
		System.out.print("------------------");
	}
	

}
