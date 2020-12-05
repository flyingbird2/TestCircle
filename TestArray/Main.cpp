#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::array;

void print(array<int, 3> &a1) {
    for (auto e : a1) {
        cout << e << endl;
    }
    cout << endl;
}

constexpr int intMax(int a, int b) {
    return a > b ? a : b;
};


int main() {
    //创建一个数组
    std::array<int, 3> a1{2, 22, 222};
    print(a1);
    //为数组赋值
    //交换数组
    //求数组大小
    //编写search函数，在数组中查找一个值
    //sort
    //二维数组
    int n = 1;
    n++;
    //std::array<int, n> a2;//error
    const int cnt = 4;
    std::array<int, cnt> a4;//ok

    const int rnt = n;
    //std::array<int, rnt> a5;//error

    int m = 1;
    const int m1 = m++;
    const int m2 = 4;
    intMax(m1, m2);
    intMax(m, m1);

    int a7[intMax(m1, m2)];
    int a8[intMax(m, m1)];//原始数组可以
    //std::array<int, intMax(m, m1)> a10;//m m1 都不是编译期变量
    //std::array<int, intMax(m1, m2)> a11;//m1不是编译期变量

    char* s1 = "H";
    *s1 = 'H1';
    constant char* s2 = 'A';
    return 0;
}

