#include <iostream>
#include "node.h"
using namespace std;



node::node(t data)
{
	this->data = data;
	this->next = nullptr;
}


/*

node* node::get_next() const
{
	return this->next;
}

node* node::set_next(node* data)
{

return this->next = data;
}

*/


node::~node()
{

	cout << "data -> " << this->data << endl;


}

void node::aff()
{

	cout << "data -> " << this->data << endl;

}
