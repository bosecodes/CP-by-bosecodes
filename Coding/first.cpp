#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

struct grp{
    int st;
    int et;
};

int main() {
    // given an array, to sort we add 1 to the last index
    // up to which we want to sort
    int a[] = {200, 100, 300, 700};
    sort(a, a+5);
    cout << "Sorting the array:\n";
    for(int i = 0; i < 4; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    // sorting a group
    // suppose when we know the size of the vector
    vector<int> v(5);
    cout << "Enter the vector v elements:\n";
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }
    // suppose we don't know the size of the vector v
    cout << "Enter the vector newv elements:\n";
    vector<int> newv;
    int ka;
    for(int i = 0; i < 5; i++){
        cin >> ka;
        newv.push_back(ka);
    }
    vector<int>::iterator it;
    cout << "The vector v elements:\n";
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    // sorting a vector
    sort(v.begin(), v.end());
    cout << "The vector v elements in sorted order:\n";
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    // sorting the newv vector(dynamically allocated)
    sort(newv.begin(), newv.end());
    vector<int>::iterator it1;
    cout << "The dynamic vector newv in sorted order:\n";
    for(it1 = newv.begin(); it1!= newv.end(); it1++){
        cout << *it1 << " ";
    }
    cout << endl;



    // Operations on strings
    string s = "Somdev";
    // to copy string s to s1
    string s1(s);
    cout << s << " " << s1 << endl;
    // to copy a substring from s to s1
    // start from index 2 and take 4 characters
    string s2(s, 2, 4);
    cout << s2 << endl;
    // to make a substring for s
    string s3 = s.substr(1,4);
    cout << "A substring s3 from (1,4) : " << s3 << endl;

    if(s3.compare(s) != 0){
        cout << s3 << " is not equal to " << s;
    }
    else{
        cout << s3 << " is equal to " << s;
    }


    // Pair class
    // pair of any 2 objects of any data types
    pair<int, char> p;
    p = make_pair(2, 'b');
    pair<int, char> p2(1, 'a');
    cout << p.first << " " << p.second << endl;
    cout << p2.first << " " << p2.second << endl;

    // Sets
    // Complexity is comparable to Binary Search Tree
    set<int> s;
    int arr[] = {1, 2, 3, 4, 5, 6, 5, 4};
    for(int i = 0; i < 7; i++){
        s.insert(arr[i]);
    }
    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    if(s.find(6) == s.end()){
        cout << "Element not found" << endl;
    }
    else{
        cout << "Element found" << endl;
    }


    // Map (Ordered Map)
    // comparable to BST, i.e. the complexities
    // to store the corresponding frequencies
    // of a particular element in the index
    // it is a key-value pair entity
    map<int, int> m;
    int arr[] = {1, 2, 3, 4, 5, 6, 5};
    // assigning element at each index to have
    // frequency 1(second element)
    for(int i = 0; i < 7; i++){
        m[arr[i]] = m[arr[i]] + 1;
    }
    map<int, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << it->first << " : " << it->second << endl;
    }
    // there's another map
    // called unordered_map
    // implemented using HashTable
    // this map takes O(1) TIME COMPLEXITY
    // it's preferred to normal maps in general
    // here in this case, not that order is not maintained
}
