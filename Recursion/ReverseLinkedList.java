import java.util.LinkedList;
import java.util.Scanner;

public class ReverseLinkedList {
    static Node head;
	static Node temp;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		LinkedList<Integer> ll=new LinkedList<>();
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			Node node =new Node();
			node.next=null;
			node.data=sc.nextInt();
			if(head==null)
			{
				temp=head=node;
			}
			else
			{
				temp.next=node;
				temp=node;
			}
		}
		
		Recursion(head);
		System.out.println();
		Node prev = null;
		Node curr=head;
		Node next;
		while(curr!=null)
		{
			next=curr.next;
			curr.next=prev;
			prev=curr;
			curr=next;
		}
		head=prev;
		temp=head;
		while(temp!=null)
		{
			System.out.print(temp.data+"->");
			temp=temp.next;
		}
		

	}
	static void Recursion(Node Pre)
	{
		if(Pre==null)
			return;
		Recursion(Pre.next);
		System.out.print(Pre.data+"->");
		return;
	}

}
class Node
{
	int data;
	Node next;
}
