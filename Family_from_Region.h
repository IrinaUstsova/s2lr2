#ifndef FAMILY_FROM_REGION_H
#define FAMILY_FROM_REGION_H

#include "Family.h"
#include "Region.h"

class Family_from_Region : public Family, public Region {
public:
    Family_from_Region(std::string surname, int num, double income, std::string name, double sum, double value);
    double count();
    void print();
};


#endif
