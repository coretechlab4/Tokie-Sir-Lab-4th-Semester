#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main()
{
    list <int> mylist1;

    list <int> :: iterator myIt1;

    mylist1.push_back(1);
    mylist1.push_back(3);
    mylist1.push_back(5);
    mylist1.push_front(100);
    mylist1.push_front(101);
    mylist1.push_front(103);

    myIt1=mylist1.begin();
    advance(myIt1,2);

    mylist1.insert(myIt1,200);
    mylist1.insert(myIt1,3,200);


    //mylist1.sort();

    //print list
    for(myIt1=mylist1.begin(); myIt1!=mylist1.end(); myIt1++)
    {
        cout<<*myIt1<<" ";
    }
}
