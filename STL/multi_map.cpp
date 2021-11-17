//
//  multi_map.cpp
//  multi_map
//
//  Created by havid albar on 15/11/21.
//

#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> alp2;
    alp2.insert(pair<int, string>(1, "a"));
    alp2.insert(pair<int, string>(3, "b"));
    alp2.insert(pair<int, string>(3, "c"));
    alp2.insert(pair<int, string>(2, "d"));
    alp2.insert(pair<int, string>(1, "e"));
    for (auto& it : alp2)
        cout << "key: " << it.first << " value: " << it.second << endl;
    
    cout << endl;
    
    return 0;
}
