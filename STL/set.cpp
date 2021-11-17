//
//  set.cpp
//  set
//
//  Created by havid albar on 15/11/21.
//

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<std::string> s;
    s.insert("first");
    s.insert("second");
    s.insert("third");
    s.insert("first");

    cout << "Set Size = " << s.size() << endl;

    for (auto& it : s)
        cout << it << " ";
    cout << std::endl;
    return 0;
}
