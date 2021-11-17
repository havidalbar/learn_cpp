//
//  vector.cpp
//  vector
//
//  Created by havid albar on 12/11/21.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    string greet = "Hello STL";
    cout << greet << endl;
    vector<int> even;
    for(int i=0; i!=10; i++){
        even.push_back(i*2);
    }
    
    for(int j=0; j<even.size(); j++){
        cout << even[j] << " ";
    }
    cout << endl;
    return 0;
}
