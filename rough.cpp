#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "A man, a plan, a canal: Panama";
    
    int n = str.length();
    int i=0;
    while(i<n)
    {
        cout<<str[i]<<endl;
        i++;
    }
        
    return 0;
}   