//
//  unordered_set.cpp
//  unordered_set
//
//  Created by havid albar on 16/11/21.
//

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<string> alphabet;
    alphabet.insert("d");
    alphabet.insert("a");
    alphabet.insert("c");
    alphabet.insert("b");
    for (auto& it : alphabet)
        cout << it << " ";
    cout << endl;
    
    return 0;
}
