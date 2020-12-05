
#include <iostream>
#include <array>
#include <cassert>

using std::cout;
using std::endl;

constexpr int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int x = 3;
    //static_assert(factorial(x) == 6, "should be 6 ");
    static_assert(factorial(3) == 6, "should be 6 ");
    std::array<int, factorial(4)> a1;
    std::array<int, 4> a2;
    cout << a1[0] << endl;
    cout << "3! = " << factorial(3) << endl;


    return 0;
}