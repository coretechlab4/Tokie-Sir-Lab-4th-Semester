#include <iostream>

using namespace std;

int main()
{

    int pos=2;
    int n=5;
    int numbers[n]={11,22,33,44,55};
    for(int i=pos; i<n; i++)
    {
        numbers[i]=numbers[i+1];
    }
    cout << "Array element :" << endl;
    for(int i=0;i<n;i++)
    {
        cout<<numbers[i]<<" ";
    }
    return 0;
}
