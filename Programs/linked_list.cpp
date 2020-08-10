#include<iostream>
using namespace std;

class Node{

public:
	int data;
	Node* next;

	Node(int d){
		data = d;
		next = NULL;
		}
};

void insertAtHead(Node*&head, int data){
	Node* temp = new Node(data);
	temp->next = head;
	head = temp;
}

int lenLL(Node* head){
	int len = 0;
	while(head!=NULL){
		head = head->next;
		len++;
	}
	return(len);
}


void insertAtTail(Node* head, int data){
	Node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	Node* newNode = new Node(data);
	temp->next = newNode;
	newNode->next = NULL;
}

void insertAtPos(Node*&head, int data, int pos){
	if(pos==0 || head==NULL){
		insertAtHead(head,data);
	}
	else if(pos>lenLL(head)){
		insertAtTail(head,data);
	}
	else{
		Node* temp = head;
		int counter = 1;
		while(counter < pos - 1){
			counter++;
			temp = temp->next;
		}
		Node* newNode = new Node(data);
		newNode->next = temp->next;
		temp->next = newNode;
	}
}

bool searchRecursive(Node*&head, int key){
	if(head == NULL){
		//We check if the Linked List is Empty or Not
		return false;
	}
	else if(head->data == key){
		//We Check if the key is equal to data in the head node
		return true;
	}
	else{
		//Else we search for right most part of the list from the current head pointer
		return searchRecursive(head->next,key);
	}
}

void deleteAtHead(Node*&head){
	if(head == NULL){
		return;
	}
	else{
		Node* temp = head;
		head = head->next;
		delete temp;
		return;
	}
}

void deleteAtTail(Node*&head){
	Node* prev = NULL;
	Node* temp = head;
	while(temp->next != NULL){
		prev = temp;
		temp = temp -> next;
	}
	
	prev->next = NULL;
	delete temp;
	return;
}

void deleteAtMiddle(Node*&head, int pos){
	Node* temp = head;
	int cpos = 0;
	while(cpos < pos - 1){
		temp = temp -> next;
		cpos++;
	}
	temp->next = (temp->next) -> next;
	delete temp->next;
	return;
}

void buildLinkedList(Node*&head){
	int data;
	cin >> data;

	while(data != -1){
		insertAtTail(head,data);
	}

}

void reverseLinkedList(Node*&head){
	Node* prev = NULL;
	Node* curr = head;
	Node* next;

	while(curr!=NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = curr->next;
	}
	head = prev;
	return;
}

int main(){
	Node* head = NULL;
	cout<<"Inserting in Linked List..."<<endl;
	insertAtHead(head,3);
	insertAtHead(head,2);
	insertAtHead(head,1);
	insertAtTail(head,4);
	insertAtTail(head,5);
	insertAtPos(head,7,3);
	insertAtPos(head,8,4);
	insertAtPos(head,0,0);
	insertAtPos(head,9,9);
	if(searchRecursive(head,5)){
		cout<<"Search Found for 5"<<endl;
	}
	else{
		cout<<"Search Not Found"<<endl;
	}if(searchRecursive(head,20)){
		cout<<"Search Found for 20"<<endl;
	}
	else{
		cout<<"Search Not Found"<<endl;
	}
	cout<<"Deleting at Head"<<endl;
	deleteAtHead(head);
	cout<<"Deleting at Tail"<<endl;
	deleteAtTail(head);
	cout<<"Deleting at Middle"<<endl;
	deleteAtMiddle(head,3);
	cout<<"Printing Linked List..."<<endl;
	buildLinkedList(head);
		return 0;
}
