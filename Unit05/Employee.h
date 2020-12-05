#pragma once
enum class Gender {
    male, female,
};

class Employee {
private:
    std::string name;
    Gender gender;
    Date birthday;

public:
    Date *getBirthday() {
        return &birthday;
    }

    void setBirthday(Date birthday) {
        this->birthday = birthday;
    }

    Employee() = default;


    std::string toString() {

        return name + " " + " " + birthday.toString();
    }
};