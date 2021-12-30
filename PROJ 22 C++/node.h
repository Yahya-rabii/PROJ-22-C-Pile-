#pragma once

typedef int t;

class node
{


private:

	t data;
	node* next;

public:

	friend class Pile;

	node(t data);
	//node* get_next()const;         //getters acces en lecture
	//node* set_next(node*  data);  //setters acces en ecriture
	~node();
	void aff();

};