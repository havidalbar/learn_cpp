//
//  multi_set.cpp
//  multi_set
//
//  Created by havid albar on 15/11/21.
//

#include <iostream>
#include <set>
using namespace std;

int main() {

    multiset<string> m;
    for (auto s : {"Braunschweig", "Hanover", "Frankfurt", "New York","Chicago", "Toronto","Paris", "Frankfurt"}) {
        m.insert(s);
    }
    m.insert({"London", "Munich", "Hanover", "Braunschweig"});
    for (auto& it : m)
        cout << it << " ";
    
    cout << endl;

    cout << "Convert to a set" << endl;
    set<string> s(m.begin(), m.end());
    for (auto& it : s)
        cout << it << " ";

    cout << endl;
    
    return 0;
}
