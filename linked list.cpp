#include<iostream>
using namespace std;

class Node
{
public:

    int data;
    Node *add;

};

void printnodes(Node *n)
{
    while(n != NULL)
    {
        cout<<n->data<<" ";
        n = n->add;
    }
    cout<<endl<<"--end of print nodes--"<<endl<<endl;
}

void search_node(Node *n, int key)
{
    while(n != NULL)
    {
        if(n->data == key)
        {
            cout<<"Found "<<key<<" at "<<n->add;
        }
        n = n->add;
    }
    //cout<<endl<<"--end of print nodes--"<<endl<<endl;
}

int main()
{

    Node *first = NULL;
    Node *second = NULL;
    Node *third = NULL;

    first = new Node();
    second = new Node();
    third = new Node();

    first->data = 99;
    first->add = second;

    second->data = 98;
    second->add = third;

    third->data = 96;
    third->add= NULL;

    printnodes(first);

    search_node(first, 98);

}
