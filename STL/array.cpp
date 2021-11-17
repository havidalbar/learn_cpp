//
//  array.cpp
//  array
//
//  Created by havid albar on 12/11/21.
//

#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 3> a1{{1, 2, 0}};
    array<int, 3> a2 = {1, 4, 3};

    sort(a1.begin(), a1.end());
    copy(a1.begin(), a1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    reverse_copy(a2.begin(), a2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
