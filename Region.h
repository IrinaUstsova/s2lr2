#ifndef REGION_H
#define REGION_H

#include <iostream>
#include <string>

class Region {
protected:
    std::string _name;
    double _sum; // размер выплаты на семью
    double _value; //пороговое значение среднедушевого дохода
public:
    Region();
    Region(std::string name, double sum, double value);
    void print();
    std::string getName();
    double getSum();
    double getValue();
};

#endif
