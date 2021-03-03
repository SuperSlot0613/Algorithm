import java.util.Scanner;

public class OrderingLinked{

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int x=sc.nextInt();
		Node1 head = null,temp = null;
		for(int i=0;i<n;i++)
		{
			Node1 node=new Node1();
			node.next=null;
			node.data=sc.nextInt();
			if(head==null)
				head=temp=node;
			else
			{
				temp.next=node;
				temp=node;
			}
		}
		Node1 before_head = null,after_head = null,before,after;
		before=before_head;
		after=after_head;
		while(head!=null)
		{
			if(before_head==null&&head.data<x)
			{
				before_head=before=head;
			}
			else if(head.data<x)
			{
				before.next=head;
				before=head;
			}
			
			if(after_head==null&&head.data>=x)
			{
				after_head=after=head;
			}
			else if(head.data>=x)
			{
				after.next=head;
				after=head;
			}
			head=head.next;
		}
		after.next=null;
		before.next=after_head;
		before=before_head;
		for(int i=0;i<n;i++)
		{
			System.out.print(before.data+"->");
			before=before.next;
		}

	}

}
class Node1
{
	int data;
	Node1 next;
}
