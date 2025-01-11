#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;

};


class LinkedList{
public:
	Node *head;

	LinkedList(){
		head = nullptr;
	}

	void insBegin(int data){
		Node * newNode = new Node();
		newNode->data = data;
		newNode->next = head;
		head = newNode;
	}

	void insEnd(int data){
		Node * newNode = new Node();
		newNode->data = data;
		newNode->next = nullptr;

		if(head == nullptr){
			head = newNode;
			return;
		}

		Node *lastNode = head;
		while(lastNode->next != nullptr){
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}

	void printList(){
		Node *walk = head;
		while(walk != nullptr){
			cout << walk->data << " ";
			walk = walk->next;
 		}
 		cout << '\n';
	}

};

int main(){
		
		LinkedList llist;
		llist.insEnd(1);
		llist.insBegin(2);
		llist.insEnd(5);
		llist.printList();





	return 0;
}