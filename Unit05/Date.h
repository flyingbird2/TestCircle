#pragma once

class Date {
private:
    int year = 2020, month = 12, day = 1;

public:
    int getYear() {
        return year;
    }

    int getMonth() {
        return month;
    }

    int getDay() {
        return day;
    }

    void setYear(int y) {
        year = y;
    }

    void setMonth(int m) {
        month = m;
    }

    void setDay(int d) {
        day = d;
    }

    Date() = default;

    Date(int year, int month, int day) : year{year}, month{month}, day{day} {}

    std::string toString() {
        return std::to_string(year) + "-"
               + std::to_string(month) + "-"
               + std::to_string(day);
    }

};