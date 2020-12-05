#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

#include "Date.h"
#include "Employee.h"

int main() {
    Employee e;
    cout << e.toString() << endl;
    e.setBirthday(Date(2019, 1, 1));
    cout << e.toString() << endl;
    Date *birth = e.getBirthday();
    birth->setYear(2018);
    cout << e.toString() << endl;
    return 0;
}