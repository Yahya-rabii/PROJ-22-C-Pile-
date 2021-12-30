#include <iostream>
#include "node.h"
#include "pile.h"


using namespace std;



int main()
{
    node* n1 = new node(12);
    node* n2 = new node(20);
    node* n3 = new node(15);

    Pile* pile1= new Pile();
    pile1->push(n1);
    pile1->push(n2);
    pile1->push(n3);


    cout << "avans supression " << endl;
    pile1->print();
    
    //pile1->pop();
  
    cout << "apres supression " <<endl ; 
    pile1->printstack();
}
