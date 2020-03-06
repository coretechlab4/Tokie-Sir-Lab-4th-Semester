#include <iostream>
using namespace std;

int main()
{
    int nums[10] = {101,102,103,104,105,106,107,108,109,110};

    int item = 103;

    int start_idx = 0;
    int End_idx = 9;
    int mid_idx = (start_idx+End_idx)/2;

    while(item!=nums[mid_idx])
    {
        mid_idx = (start_idx+End_idx)/2;
        if(item==nums[mid_idx])
        {
            cout<<item<<" found at "<<mid_idx;
            break;
        }
        else if(item<nums[mid_idx])
        {#include <iostream>
using namespace std;

int main()
{
    int nums[10] = {1,2,3,4,5,6,7,8,9,10};

    int first = 0;
    int last = 9;
    int mid;
    int item = 7;


    int steps = 0;

    while(mid!=item)
    {
        mid=(first+last)/2;

        if(nums[mid]==item){
            cout<<"data found at "<< mid;
            steps++;
            break;
        }

        else if(nums[mid]<item){
            first = mid;
            steps++;
        }

        else if(nums[mid]>item){
            last = mid;
            steps++;
        }

    }

    cout<<"\nTotal step needed: "<<steps;
}

            End_idx = mid_idx;

        }
        else if(item>nums[mid_idx])
        {
            start_idx = mid_idx;

        }

    }
}
