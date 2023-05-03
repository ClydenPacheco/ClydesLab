//Producer-Consumer program
#include<iostream>
#include<conio.h>
using namespace std;
int stack[10],top=-1,size=10,avail=10;
void pushp(){
	if (top >= ::size-1)
		cout << "Stack is full!\n";
	else {
		cout << "Enter the item number: ";
		top++;
		cin >> stack[top];
		cout << "Item (" << stack[top] << ") has been produced.\n";
		::avail--;
	}
}
void popc() {
	if (top == -1)
		cout << "Stack is empty!\n";
	else {
		cout << "Item (" << stack[top] << ") has been consumed.\n";
		top--;
		::avail++;
	}
}
void disp() {
	if (top == -1)
		cout << "Stack is empty!\n";
	else {
		cout << "Items in the stack are:\n";
		for (int i = 0;i <= top;i++) {
			cout << "Item (" << stack[i] << ")\n";
		}
	}
}
int main() {
	int c;
              cout << "Size of available resources: " << ::avail <<endl;
	cout << "Enter the number corresponding to the available options:\n";
	cout << "1. Produce\n";
	cout << "2. Consume\n";
	cout << "3. Display\n";
	cout << "4. Exit\n";
	do {
		cout << "Enter the option: ";
cin >> c;
		switch (c) {
		case 1: {
			pushp();
			break;
		}
		case 2: {
			popc();
			break;
		}
		case 3: {
			disp();
			break;
		}
		case 4: {
			cout << "Exiting...\n";
			break;
		}
		default: {
			cout << "Inalid input!\n";
			break;
		}
		}
	} while (c != 4);
	system("pause");
	return 0;
}
