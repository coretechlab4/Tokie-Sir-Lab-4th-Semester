#include <iostream>

using namespace std;

int main()
{
    int key;
    cout<<"Enter Your Value : \n";
    cin>>key;
    int number[40]={52,69,13,45,20,23,12,5,14,65,455,47,6,5,9,54,55,66,99,45,43,30,15,26,36,47,98,89,78,87,45,96,25,52,14,6,36,201,203,520};
    for(int i=0;i<20;i++)
    {
        if (number[i]==key)
        {
            cout << "Found At Position No : \n" <<i;
            cout<<"\n";
        }
    }

    return 0;
}
