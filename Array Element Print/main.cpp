#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    int num[n];
    cout<<"Enter Array Elements : ";
    int i;
    for(i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"\nYour Array : "<<num[i];
    }
    return 0;
}
