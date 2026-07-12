#include<iostream>
#include<vector>
// vector is a sequence container that encapsulates dynamic size arrays. 
using namespace std;
int main() {
    vector<int> vec;

    cout << "Capacity of vector: " << vec.capacity() << endl;
    vec.push_back(1);
     cout << "Capacity of vector: " << vec.capacity() << endl;
    vec.push_back(2);
     cout << "Capacity of vector: " << vec.capacity() << endl;
    vec.push_back(3);
     cout << "Capacity of vector: " << vec.capacity() << endl;
    int size = vec.size();
    cout << "Size of vector: " << size << endl;

    cout << "First vector element: " << vec.front() << endl;
    cout << "Last vector element: " << vec.back() << endl;
    cout << "Is vector empty? " << vec.empty() << endl;
    cout << "Element at index 2: " << vec.at(2) << endl; 
    cout << "Before pop_back :" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element at index " << i << ": " << vec[i] << endl;
    }
    vec.pop_back();
    cout << "After pop_back:" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << "Element at index " << i << ": " << vec[i] << endl;
    }
     cout << "Capacity of vector: " << vec.capacity() << endl;

    cout << "Size of vector: " << vec.size() << endl;
    //it also have insert() and erase() methods to add and remove elements at specific positions in the vector.
    //also have clear() method to remove all elements from the vector.
    vector<int> vec2(10, 5); // create a vector of size 10 with all elements initialized to 5
    vector<int> vec3(vec); // create a copy of vec
    for (int i = 0; i < vec2.size(); i++) {
        cout << "Element at index for vec 2 " << i << " of vec2: " << vec2[i] << endl;
    }
    for (int i = 0; i < vec3.size(); i++) {
        cout << "Element at index for vec 3 " << i << " of vec3: " << vec3[i] << endl;
    }
    return 0;
}