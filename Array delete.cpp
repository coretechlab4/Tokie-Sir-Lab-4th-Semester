#include<iostream>
using namespace std;

int main()
{
    int nums[5] = {1,2,3,4,5};
    int value;
    int pos;

    cout<<"Printing array: ";
    for(int i=0; i<5; i++)  //printing values
        cout<<nums[i]<<"\t";
    cout<<endl;

    cout<<"Enter <value>:";
    cin>>value;

    for(int i=0; i<5; i++)
    {
        if(nums[i]==value)
        {
            pos = i;
        }
    }

    for(int i=pos; i<5; i++)
    {
        nums[i] = nums[i+1];
    }

    cout<<"Printing array after deletion: ";
    for(int i=0; i<5; i++)  //printing values
        cout<<nums[i]<<"\t";
    cout<<endl;
}
