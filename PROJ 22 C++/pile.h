#pragma once
#include "node.h"


//class node;

class Pile
{

private:

	node* sommet; // => Faible
  //node* sommet; // => Forte


public:

	
	Pile();
	~Pile();

	void push(node* nd);
	void pop();
	bool is_empty()const;
	void print();
	void printstack();
	node* som()const;


};
