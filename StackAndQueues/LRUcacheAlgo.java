package StackAndQueues;

import java.util.HashMap;
import java.util.Scanner;

public class LRUcacheAlgo {
	static class Node{
		int key; //Creation of double LinkedList
		int value;
		Node next;
		Node pre;
		
		Node(int k,int v) {
			this.key=k;
			this.value=v;
		}
		
	}
	
	static class LRUcache{
		Node head;
		Node tail;
		HashMap<Integer,Node> map;//Using hashMap to store the key value pair
		int cap=0;
		LRUcache(int cap){
			this.cap=cap;
			map=new HashMap<>(cap);
		}
		
		void putThevalue(int key,int value)
		{
//			To put the value on the HashMap 
			if(map.containsKey(key))
			{
				//if the key is already present then move that node to top because it is use 
				Node node=map.get(key);
				node.value=value;
				remove(node);
				putOnTop(node);
			}
			else
			{
				if(map.size()>=cap)
				{
					//if the size is full then remove the least recently used node which are given by tail pointer
					map.remove(tail.key);
					remove(tail);
				}
				Node node=new Node(key,value);
				map.put(key,node);
				putOnTop(node);
			}
					
			
		}
		int GetValue(int key)
		{
			if(map.containsKey(key))
			{
				Node node=map.get(key);
				remove(node);
				putOnTop(node);
				
				return node.value;
			}
			return -1;
		}

		private void putOnTop(Node node) {
			// TODO Auto-generated method stub
			node.next=head;
			node.pre=null;
			if(head!=null)
			     head.pre=node;
			head=node;
			if(tail==null)
			{
				tail=node;
			}
			
		}

		private void remove(Node node) {
			// TODO Auto-generated method stub
			Node nextNode=node.next;
			Node preNode=node.pre;
			
			if(preNode!=null)
			{
				preNode.next=nextNode;
			}
			else
				head=node.next;
			
			if(nextNode!=null)
			{  
				nextNode.pre=preNode;
			}
			else
				tail=preNode;
			
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int cap=sc.nextInt();
		LRUcache lr=new LRUcache(cap);
		lr.putThevalue(1,5);
		lr.putThevalue(2, 3);
		System.out.println(lr.GetValue(2));
		
		lr.putThevalue(3, 10);
		lr.putThevalue(4, 10);
		System.out.println(lr.GetValue(1));
		
		
		

	}

}
