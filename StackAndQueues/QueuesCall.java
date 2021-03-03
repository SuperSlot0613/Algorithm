package StackAndQueues;

public class QueuesCall {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Queues q=new Queues();
		
		q.enqueues(10);
		q.Display();
		q.enqueues(20);
		q.Display();
		q.enqueues(30);
		q.Display();
		q.enqueues(40);
		q.Display();
		q.dequeues();
		q.Display();
		q.dequeues();
		q.Display();
		q.enqueues(50);
		q.Display();
		q.enqueues(60);
		q.Display();
		
		System.out.println();
		System.out.println(q.getFront());

	}

}
