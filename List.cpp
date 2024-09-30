#include "List.h"
using namespace std;
#include<iostream>
List::List()
{
	head = 0;
}
List::~List()
{
	node* a, * b;
	a = head;
	b = a->next;
	while (a != NULL)
	{
		delete a;
		a = b;
		if (a != 0)
		{
			b = a->next;
		}
	}
}
bool List::isEmpty()
{
	if (head == NULL)
	{
		cout << "List is empty" << endl;
		return 0;
	}
	return 1;
}
void List::push(int val)
{
	node* p, * ptr;
	p = new node;
	p->data = val;
	p->next = NULL;
    if (isEmpty())
	{
		head = p;
		head->next = NULL;
		cout << "The List is empty" << endl;
	}
	else
	{
		ptr = head;
		head = p;
		head->next = ptr;
		cout << "The first value in list is " << head->data << endl;
	}

}

void List::pop(int b)
{
	if (isEmpty())
	{
		cout << "The List is empty" << endl;
	}

	{while (head->next == NULL)
	{
		node* t;
		t = head->next;
	}
	cout << head->next << endl;
	delete head;
	cout << "After deleting head" << endl;
	cout << head->data << endl;
	}
}

void List::peek(int c)
{
	if (isEmpty())
	{
		cout << "The List is empty" << endl;
	}
	else
	{
		node *a= head->next;
		cout << head->next << endl;
	}
}

void List::size(int s)
{
	if (isEmpty())
	{
		cout << "The List is empty" << endl;
	}
	else {
		int count = 0;
		while (head->next != NULL)
		{
			count++;
		}
		cout << "The number of elements " << count << endl;
	}
}