#include <iostream>
#include <array>
// array is a container that encapsulates fixed size arrays.
using namespace std;

int main() {
 int base[3] = {1, 2, 3};
    array<int, 3> arr = {4, 5, 6};
    int size = arr.size();
    cout << "Size of array: " << size << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }
    cout << "First array elements: "<<arr.front()<<endl;
    cout << "Last array elements: "<<arr.back()<<endl;
    cout << "Is array empty? " << arr.empty() << endl;
    cout<<"Element at index 2: "<<arr.at(2)<<endl; 
    return 0;
}