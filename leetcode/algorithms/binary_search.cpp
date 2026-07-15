#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int binarysearch(vector<int>& arr, int *target)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == *target)
            return mid;
        else if (arr[mid] < *target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;// target not found
}
int main()
{
    vector<int> arr = { 2, 3, 4, 9 , 10 , 40 };
    int target = 10;
    int result = binarysearch(arr, &target);
    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;
    return 0;
}