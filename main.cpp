#include "Family_from_Region.h"

int main() {
    Family fam("Black", 3, 150000);
    Region reg("USA", 20000, 55000);
    Family_from_Region fmr(fam.getSurname(), fam.getNum(), fam.getIncome(), reg.getName(), reg.getSum(), reg.getValue());
    fmr.print();
}