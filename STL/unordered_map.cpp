//
//  unordered_map.cpp
//  unordered_map
//
//  Created by havid albar on 16/11/21.
//

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> alp;
    alp.insert(pair<int, string>(2, "a"));
    alp.insert(pair<int, string>(1, "b"));
    alp.insert(pair<int, string>(4, "c"));
    alp.insert(pair<int, string>(3, "d"));
    alp.insert(pair<int, string>(0, "e"));
    
    for (auto& it : alp)
        cout << "key: " << it.first << " value: " << it.second << endl;
    
    cout << endl;
    
    return 0;
}
