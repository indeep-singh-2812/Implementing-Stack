//Program to demonstrate code for Stack implementation using Linked List. 
//Author - Indeep Singh
//Date - 05/07/2017

#include<iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

class Stack{
	private:
		Node* head;
	public:
		Stack(){
			head = NULL;
		}
		void Push(int);
		int Pop();
		void Peek();
		void Display();
};

void Stack::Push(int value){
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = head;
	head = newNode;
}

int Stack::Pop(){
	if(head == NULL){
		cout<<"\n Stack is EMPTY.";
		return -1;
	}
	
	Node* poppedNode = head;
	head = poppedNode->next;
	int poppedValue = poppedNode->data;
	delete(poppedNode);
	return poppedValue;
}

void Stack::Peek(){
	if(head == NULL){
		cout<<"\n Stack is EMPTY.";
	} else{
		cout<<"\n Element at top of Stack is :"<< head->data;
	}
}

void Stack::Display(){
	if(head == NULL){
		cout<<"\n Stack is EMPTY";
	} else{
		Node* counter = head;
		cout<<"\n Elements in Stack is : ";
		while(counter != NULL){
			cout<<counter->data <<" ";
			counter = counter->next;
		}
	}
}

int main(){
	Stack stack;
	
	//When Stack is Empty
	stack.Pop();
	stack.Peek();
	stack.Display();
	
	//Inserting elements in a stack.
	stack.Push(1);
	stack.Push(2);
	stack.Push(3);
	stack.Push(4);
	stack.Push(5);
	stack.Push(6);
	stack.Display();
	
	//Getting the top element of stack
	stack.Peek();

	//Popping element from stack.
	cout<<"\n Element Popped from stack is : "<<stack.Pop();
	stack.Display();
	
	//Popping element from stack.
	cout<<"\n Element Popped from stack is : "<<stack.Pop();
	stack.Display();
	
	//Popping element from stack.
	cout<<"\n Element Popped from stack is : "<<stack.Pop();
	stack.Display();
	
	return 0;
}
