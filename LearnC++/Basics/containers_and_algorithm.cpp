//
//  containers_and_algorithm.cpp
//  containers_and_algorithm
//
//  Created by havid albar on 11/11/21.
//
// Chapter 2, Page Book 88-110

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstdlib>
using namespace std;

template<typename T>
ostream &operator<<(ostream& os, vector<T> &path)
{
    if (!path.empty()) {
        os << "[";
        copy(path.begin(), path.end(), ostream_iterator<T>{ os, ", " });
        os << "]";
    }
    return os;
}

int main() {
    vector<int> integers{ 11, 21, -17, 0, 30 }; // Initialize a vector of ints
    cout << integers << endl; // Print the vector
    sort(integers.begin(), integers.end()); // Sort the vector
    cout << integers << endl; // Print the vector again
    return 0;
}
