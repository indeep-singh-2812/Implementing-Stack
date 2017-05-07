// Program to demonstrate various Stack operations i.e. Push, Pop, Peek, Display.
//Author - Indeep Singh
//Date - 05-07-2017

#include<iostream>
#include<string>

using namespace std;

#define MAXSIZE 100

class Stack{
	private:
		int container[MAXSIZE];
		int top;
	public:
		Stack(){
			top = -1;
		}
		void Push(int);
		int Pop();
		void Peek();
		void Display();
};

void Stack::Push(int value){
	if(top == MAXSIZE-1){
		cout<<"\n Stack is FULL.";
	} else{
		top++;
		container[top] = value;
	}
}

int Stack::Pop(){
	if(top == -1){
		cout<<"\n Stack is EMPTY.";
		return -1;
	} 
	int poppedValue = container[top];
	top--;
	return poppedValue;
}

void Stack::Peek(){
	if(top == -1){
		cout<<"\n Stack is EMPTY.";
		
	} else{
		cout<<"\n Element at TOP of Stack is : "<<container[top];
	}
}

void Stack::Display(){
	if(top == -1){
		cout<<"\n Stack is EMPTY.";
	} else{
		cout<<"\n Elements in Stack : ";
		for(int i = 0;i<=top;i++){
			cout<<" "<<container[i];
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
