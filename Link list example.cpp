#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main()
{
    list <int> mylist1;
    list <int> :: iterator myIt1;

    mylist1.push_back(110);
    mylist1.push_back(3);
    mylist1.push_back(5);

    mylist1.push_front(100);
    mylist1.push_front(101);
    mylist1.push_front(103);

    mylist1.insert(myIt1,3,200);
    mylist1.delete(myIt1,4);

    //print list:
    for(myIt1=mylist1.begin(); myIt1!=mylist1.end(); myIt1++)
    {
        cout<<*myIt1<<" ";
    }
}
