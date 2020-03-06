#include<iostream>
using namespace std;

int main()
{
    int pos = 2;
    int value = 77;
    int n[5] = {1,2,3,4,5};

    for(int i=4; i>=pos; i--)
    {
        n[i] = n[i-1];
    }

    cout<<endl;
    for(int i=0; i<5; i++)  //printing values
        cout<<n[i]<<"\t";

    n[pos] = value;

    cout<<endl;
    for(int i=0; i<5; i++)  //printing values
        cout<<n[i]<<"\t";

}
