//
//  unordered_multiset.cpp
//  unordered_multiset
//
//  Created by havid albar on 16/11/21.
//

#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_multiset<string> m;
    for (auto s : {"Braunschweig", "Hanover", "Frankfurt", "New York","Chicago", "Toronto","Paris", "Frankfurt"}) {
        m.insert(s);
    }
    m.insert({"London", "Munich", "Hanover", "Braunschweig"});
    for (auto& it : m)
        cout << it << " ";
    
    cout << endl;

    return 0;
}
