#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Create vector, declare
    // vector<int> v;
    // vector<int> v1(5,1);// Create a vector of size 5, initialized with 1s

    // cout << "Size of vector: " << v.size() << endl;       // Output the size of the vector
    // cout << "Capacity of vector: " << v.capacity() << endl; // Output the capacity of the vector

    // v.push_back(10);
    // v.push_back(15);
    // v.push_back(1);

    // cout << "Size of vector: " << v.size() << endl;       
    // cout << "Capacity of vector: " << v.capacity() << endl; 
    // //Update the value at index 1
    // v[1]=23;

    // cout << "Size of vector: " << v1.size() << endl;       
    // cout << "Capacity of vector: " << v1.capacity() << endl; 
    // v1.push_back(20);
    // cout << "Size of vector: " << v1.size() << endl;       
    // cout << "Capacity of vector: " << v1.capacity() << endl;

    //Delete the last element
    vector<int>v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.pop_back();
    cout << "Size of vector: " << v2.size() << endl;       
    cout << "Capacity of vector: " << v2.capacity() << endl;  
    
    v2.erase(v2.begin() + 1); // Erase the element at index 1
    cout << "Size of vector after erase: " << v2.size() << endl;       
    cout << "Capacity of vector after erase: " << v2.capacity() << endl;
    for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " "; 
    }
    cout << endl;

    v2.insert(v2.begin() + 1, 10); // Insert 10 at index 1
    cout << "Size of vector after insert: " << v2.size() << endl;       
    cout << "Capacity of vector after insert: " << v2.capacity() << endl;
    for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " "; 
    }
    cout << endl;

    return 0;
}
