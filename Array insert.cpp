#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter memory size: ";cin>>n;


    int nums[n];


    for(int i=0; i<n; i++)  //initializing nums array with -99
        nums[i]=-99;


    cout<<"initializing array: ";
    for(int i=0; i<n; i++)  //printing values
        cout<<nums[i]<<"\t";
    cout<<endl;


    int m;
    cout<<"Enter array size: ";cin>>m;

    cout<<"Enter numbers: ";
    for(int i=0; i<m; i++)
        cin>>nums[i];

    int pos;
    int value;

    cout<<"\nEnter <pos> <value>:";
    cin>>pos>>value;

    if(nums[n-1]!=-99)
    {
        cout<<"Can't insert. Memory is full!";
        return 0;
    }
    else
    {
        for(int i=n-1; i>=pos; i--)
        {
            nums[i] = nums[i-1];
        }
        nums[pos] = value;//setting value at position index
    }

    cout<<"Printing array: ";
    for(int i=0; i<n; i++)  //printing values
        cout<<nums[i]<<"\t";
    cout<<endl;

}
