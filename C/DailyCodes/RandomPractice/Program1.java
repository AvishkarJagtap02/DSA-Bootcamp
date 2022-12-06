class LL {
	Node head;
	class Node {
	
		int data;
		Node next;

		Node(int data) {
			this.data = data;
			this.next = null;
		}
	}
	//addFirst
	public void addFirst(int data) {
		Node newNode = new Node(data);
		if(head==null) {
			head = newNode;
			return;
		}
		newNode.next = head;
		head = newNode;
	}
	//addLast
	public void addLast() {
		Node newNode = new Node(data);
		if(head==null) {
			head = newNode;
			return;
		}
		Node temp = head;
		while(temp.next !=null) {
			temp = temp->next;
		}
		temp.next=newNode;
	}
	public void printList() {
		if(head==null) {
			System.out.println("List is Empty\n");
			return;
		}
		Node temp = head;
		while(temp!=null) {
			System.out.println(temp.data +" -> ");
			temp = temp->next;
		}
	}
		


	public static void main(String args[]) {
		LL list = new LL();
		list.addFirst(10);
		list.addFirst(20);
		list.addLast(30);
		list.printList();


	}
}

