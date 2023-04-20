#include <iostream>
using namespace std;
#include <vector>


int main()
{
    vector <int> nums = {0,1,0,3,12};
    int size,
        temp;
    
    
    
    size = nums.size();
    
    for(int i = 0; i < size; i++)
    {
        if(nums[i] == 0)
        {
            temp = nums[i];
            nums.erase(nums.begin() + i);
            nums.push_back(temp);
        }
    }
    
    
    for(int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    
    
    

    return 0;
}
