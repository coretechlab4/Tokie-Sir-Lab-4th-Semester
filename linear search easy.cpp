#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter array size:";
    cin>>n;

    int nums[n];

    cout<<"Enter all numbers:\n";
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }

    int given_num;
    bool flag=0;

    cout<<"Enter Search value:";
    cin>>given_num;


    for(int i=0; i<n; i++)
    {
        if(given_num==nums[i])
        {
            cout<<"Found the "<<given_num<<" at "<<i<<endl;
            flag=1;
        }

    }

    if(flag==0)
    {
        cout<<"Not found the "<<given_num<<endl;
    }


}
