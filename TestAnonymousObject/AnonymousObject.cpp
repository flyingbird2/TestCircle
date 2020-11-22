#include <iostream>


class Account {
    double balance;
public:
    Account() {

    }

    Account(double balance_) {
        balance = balance_;
    }

    //取钱
    double withdraw(double amount) {
        double temp = balance;
        if (balance < amount) {
            balance = 0;
            return temp;
        } else {
            return balance -= amount;
        }
    }
};

int main() {
    std::cout << Account(78).withdraw(90) << std::endl;
    return 0;
}