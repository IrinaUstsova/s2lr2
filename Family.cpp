#include "Family.h"

Family::Family(std::string surname, int num, double income) : _surname(surname), _num(num), _income(income) {}

double Family::count() {
    return _income / _num;
}

void Family::print() {
    std::cout << "Surname: " << _surname << "; Number of persons: " << _num << "; Income: " << _income << std::endl;
}

Family::Family() {}

std::string Family::getSurname() {
    return _surname;
}

int Family::getNum() {
    return _num;
}

double Family::getIncome() {
    return _income;
}
