#include "Family_from_Region.h"

double Family_from_Region::count() {
    if ((_income / _num) <= _value) {
        return (_income + _sum) / _num;
    }
    else {
        return Family::count();
    }
}

void Family_from_Region::print() {
    std::cout << "Region: " << _name << "; Family: " << _surname << "; Per capita income: " << count() << std::endl;
}

Family_from_Region::Family_from_Region(std::string surname, int num, double income, std::string name, double sum, double value ) : Family(surname, num, income),
    Region(name, sum, value) {}