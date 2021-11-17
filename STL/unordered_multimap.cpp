//
//  unordered_multimap.cpp
//  unordered_multimap
//
//  Created by havid albar on 16/11/21.
//

#include <iostream>
#include <unordered_map>
using namespace std;


int main() {
    unordered_multimap<int, string> alp2;
    alp2.insert(pair<int, string>(3, "a"));
    alp2.insert(pair<int, string>(3, "b"));
    alp2.insert(pair<int, string>(1, "c"));
    alp2.insert(pair<int, string>(2, "d"));
    alp2.insert(pair<int, string>(1, "e"));
    alp2.insert(pair<int, string>(2, "f"));
    
    for (auto& it : alp2)
        cout << "key: " << it.first << " value: " << it.second << endl;
    
    cout << endl;
    
    return 0;
}
