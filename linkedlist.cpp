#include <iostream>
#include "linkedlist.h"
using namespace std;
list::list()
{
	head = NULL;
	tail = NULL;
}
void list::createnode(double value)
{
	node *ptr = new node;
	ptr->data = value;
	ptr->next = NULL;
	if (head == NULL)
	{
		head = ptr;
		tail = ptr;
		ptr = NULL;
	}
	else
	{
		tail->next = ptr;
		tail = ptr;
	}
}

void list::display()
{
	node *ptr = new node;
	ptr = head;
	while (ptr != NULL)
	{
		cout << ptr->data << "\t";
		ptr = ptr->next;
	}
}

void list::insert_at_first(double value)
{
	node *ptr = new node;
	ptr->data = value;
	ptr->next = head;
	head = ptr;
}

void list::insert_at_position(int pos, double value)
{
	node *pre = new node;
	node *cur = new node;
	node *ptr = new node;
	cur = head;
	for (int i = 1; i < pos; i++)
	{
		pre = cur;
		cur = cur->next;
	}
	ptr->data = value;
	pre->next = ptr;
	ptr->next = cur;
}
void list::delete_first()
{
	node *ptr = new node;
	ptr = head;
	head = head->next;
	delete ptr;
}

void list::delete_last()
{
	node *cur = new node;
	node *pre = new node;
	cur = head;
	while (cur->next != NULL)
	{
		pre = cur;
		cur = cur->next;
	}
	tail = pre;
	pre->next = NULL;
	delete cur;
}

void list::delete_at_position(int pos)
{
	node *cur = new node;
	node *pre = new node;
	cur = head;
	for (int i = 1; i < pos; i++)
	{
		pre = cur;
		cur = cur->next;
	}
	pre->next = cur->next;
}
