#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter square 2D array size:";cin>>n;
    int nums[n][n];

    cout<<"Enter array values:\n";

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>nums[i][j];
        }
    }

    cout<<"2D print: \n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<nums[i][j]<<"\t";
        }
        cout<<endl;
    }
}
