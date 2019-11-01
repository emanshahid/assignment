#include<iostream>
#include "linkedlist.h"
int main()
{
	list obj;

	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);
	obj.createnode(55);
	cout << "\n -.-.-.-.-Display Nodes-.-.-.-.- \n";
	obj.display();

	obj.createnode(15);
	cout << "\n -.-.-.-.-Display Nodes-.-.-.-.- \n";
	obj.display();

	obj.insert_at_first(10);
	cout << "\n -.-.-.-.-Display Nodes-.-.-.-.- \n";
	obj.display();

	obj.delete_first();
	cout << "\n -.-.-.-.-Display Nodes-.-.-.-.- \n";
	obj.display();

	obj.delete_last();
	cout << "\n -.-.-.-.-Display Nodes-.-.-.-.- \n";
	obj.display();

	obj.delete_at_position(4);
	cout << "\n -.-.-.-.-Display Nodes-.-.-.-.- \n";
	obj.display();

	obj.insert_at_position(3, 4472);
	cout << "\n -.-.-.-.-Display Nodes-.-.-.-.- \n";
	obj.display();

	system("pause");
	return 0;
}