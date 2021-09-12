#include "Region.h"

Region::Region(std::string name, double sum, double value) : _name(name), _sum(sum), _value(value) {}

void Region::print() {
    std::cout << "Name: " << _name << "; Summary: " << _sum << "; Threshold: " << _value << std::endl;
}

Region::Region() {}

std::string Region::getName() {
    return _name;
}

double Region::getSum() {
    return _sum;
}

double Region::getValue() {
    return _value;
}
