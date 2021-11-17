//
//  map.cpp
//  map
//
//  Created by havid albar on 15/11/21.
//

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> alp;
    alp.insert(pair<int, string>(1, "a"));
    alp.insert(pair<int, string>(4, "b"));
    alp.insert(pair<int, string>(3, "c"));
    alp.insert(pair<int, string>(2, "d"));
    // statement below will be unused because map must be unique
    alp.insert(pair<int, string>(1, "e"));
    
    for (auto& it : alp)
        cout << "key: " << it.first << " value: " << it.second << endl;
    
    cout << endl;
    
    return 0;
}
