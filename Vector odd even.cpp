#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a;
    int value;
    vector <int> nums;
    vector <int>:: iterator it;

    for(int i=0;i<5;i++)
    {
        cin>>value;
        nums.push_back(value);
    }

    for(it =nums.begin();it!=nums.end();it++)
    {
        if((*it%2)==0)
        {
            cout<<*it<<"Is Even"<<"\t";
        }
        else
        {
            cout<<*it<<"Is Odd"<<"\t";
        }
    }

}
