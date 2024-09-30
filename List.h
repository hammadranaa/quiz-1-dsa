#pragma once
#include<iostream>
#include"node.h"
class List
{
public:
	node* head;

	List();
	~List();
	bool isEmpty();
	void push(int a);
	void pop(int b);
	void peek(int c);
	void size(int d);
};

