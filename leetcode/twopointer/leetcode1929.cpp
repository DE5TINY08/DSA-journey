#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
   vector<int> getConcatenation(vector<int>& ma)
 { 
    vector<int> k(ma);
    int n = ma.size();
    for (int i=0;i<n;i++)
    {  
        k[n+i] = ma[i];
    }
    return k;
 } 
};
int main()
{
    vector<int> nums ={2,6,5,8};
    
    Solution a;
    vector<int> ans = a.getConcatenation(nums);
    std::cout<<"nums :"<<endl;
    int n = nums.size();
    for(int i=1;i<n+1;i++)
    {
        std::cout<<"Element "<<i<<" : "<<nums[i-1]<<endl;

    }
     std::cout<<"ans :"<<endl;
     for(int i=1;i<n;i++)
    {
        std::cout<<"Element "<<i<<" : "<<ans[i-1]<<endl;

    }
 for(int i=n;i<(2*n+1);i++)
    {
        std::cout<<"Element "<<i<<" : "<<ans[i-1]<<endl;

    }
    return 0;
}