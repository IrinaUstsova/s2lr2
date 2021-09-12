#ifndef FAMILY_H
#define FAMILY_H

#include <iostream>
#include <string>

class Family {
protected:
  std::string _surname;
  int _num;
  double _income;
public:
    Family();
    Family(std::string surname, int num, double income);
    double count();
    void print();
    std::string getSurname();
    int getNum();
    double getIncome();
};

#endif