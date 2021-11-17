//
//  list.cpp
//  list
//
//  Created by havid albar on 12/11/21.
//

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<char> alphabet;
    for (char i = "a"; i <= "z"; ++i) {
        alphabet.push_back(i);
    }
    
    for (auto pos = alphabet.begin(); pos != alphabet.end(); ++pos)
        cout << *pos << " ";
    
    cout << endl;
    return 0;
}
