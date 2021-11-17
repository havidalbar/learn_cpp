//
//  static_assertions.cpp
//  static_assertions
//
//  Created by havid albar on 08/11/21.
//
// Chapter 2, Page Book 57

#include <iostream>
using namespace std;
#include <cmath>

void test(){
    constexpr auto val1 = 1.23f;
    constexpr auto val2 = HUGE_VALF;
    
    // testing with static assert
    static_assert(val1 == val1, "OK");
    static_assert(val2 == val2, "OK");
}

int main()
{
    test();
    return 0;
}
