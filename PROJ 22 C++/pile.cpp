#include "pile.h"
#include <iostream>
#include "node.h"
using namespace std;


Pile::Pile()
{

    this->sommet = nullptr;

}

Pile::~Pile()
{

    while (!this->is_empty())
    {
        this->pop();
    }

}

void Pile::push(node* nd)
{

    nd->next = this->sommet;
    this->sommet = nd;

}

void Pile::pop()
{

    node* tmp = this->sommet ;
    this->sommet = this->sommet->next;
 
  //  tmp->data = NULL;
  //  delete tmp;

}


bool Pile::is_empty() const
{
    return (this->sommet == nullptr);
}

void Pile::print()
{

    node* tmp = this->sommet;

    while (tmp != nullptr)
    {

        tmp->aff();
        tmp = tmp->next;

    }


}


void Pile::printstack()
{

    node* tmp = this->sommet;
    Pile newpile;

    while (tmp != nullptr)
    {

        tmp->aff();
        
        this->pop();
        newpile.push(tmp);
        
        //tmp = sommet->next; // boucle infinie
        
        //tmp = tmp->next; // erreur
        
        tmp = this->sommet;
       
       

    }

    tmp =newpile.sommet;

    while (tmp != nullptr)
    { 
         this->push(tmp);
          tmp = tmp->next;
          newpile.pop();      


    }

}


node* Pile::som() const
{
    return this->sommet ;
}

