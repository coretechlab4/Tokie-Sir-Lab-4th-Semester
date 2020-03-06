#include <iostream>
using namespace std;

int main()
{
    int steps=0;

    int nums[]={1,2,3,4,5,6,7,8,9,10};

    for(int i=0; i<10; i++)
    {
        if(nums[i]==8)
            cout<<"we got the number 8 at: "<<i;
        steps++;
    }

    cout<<"\nTotal step needed: "<<steps;
    return 0;
}
