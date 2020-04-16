//
// Created by CABRIGI on 4/11/2020.
//

#ifndef POO2_TEO_IMPLEMENTING_INTEGER_INTEGER_H
#define POO2_TEO_IMPLEMENTING_INTEGER_INTEGER_H

#include <iostream>
using namespace std;

class Integer {
    int value;
public:
    Integer();
    Integer(int _value);
    Integer(const Integer& other);
    Integer operator=(const Integer& other);
    Integer operator+(int _value);
    operator int();
    friend std::ostream& operator << (std::ostream& os, const Integer& lol);
    friend std::istream& operator >> (std::istream& os, Integer& lol);
};


#endif //POO2_TEO_IMPLEMENTING_INTEGER_INTEGER_H
