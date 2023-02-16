//reverse a linked list
#include <iostream>
using namespace std;


struct Node {
	int data;
	struct Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

struct LinkedList {
	Node* head;
	LinkedList() { head = NULL; }

	
	void reverse()
	{
	
		Node* current = head;
		Node *prev = NULL, *next = NULL;

		while (current != NULL) {
			next = current->next;
			current->next =prev;
			prev = current;
			current = next;
		}
		head = prev;
	}
	void print()
	{
		struct Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void push(int data)
	{
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}
};

int main()
{

	LinkedList r;
	r.push(12);
	r.push(3);
	r.push(5);
	r.push(8);
    r.push(33);

	cout << "Given linked list\n";
	r.print();

	r.reverse();

	cout << "\nReversed Linked list \n";
	r.print();
	return 0;
}











