#include<iostream>
#include<list>
// list is a sequence container that encapsulates doubly linked lists.
//list have last in first out (LIFO) and first in first out (FIFO) properties.
//time complexity of insertion and deletion is O(1) in list.while have more time complexity in search and access of elements in list is O(n) as compared to vector and array.
//list dont have random access of elements as compared to vector and array using at() and [] operator.
using namespace std;
int main() {
    list<int> lst;
    cout << "Size of list: " << lst.size() << endl;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    cout << "Size of list: " << lst.size() << endl;
    cout << "First list element: " << lst.front() << endl;
    cout << "Last list element: " << lst.back() << endl;
    cout << "Is list empty? " << lst.empty() << endl;
    cout<<"Element at index 2: "<<*next(lst.begin(), 2)<<endl; 
    cout << "Before pop_back :" << endl;
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        cout << "Element: " << *it << endl;
    }
    lst.pop_back();
    cout << "After pop_back:" << endl;
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        cout << "Element: " << *it << endl;
    }
     cout << "Size of list: " << lst.size() << endl;

    //it also have insert() and erase() methods to add and remove elements at specific positions in the list.
    //also have clear() method to remove all elements from the list.
    //End of sequence containers.
    return 0;
}