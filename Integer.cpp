//
// Created by CABRIGI on 4/11/2020.
//

#include "Integer.h"

Integer::Integer() {
}

Integer::Integer(int _value) {
    value = _value;
}

Integer::Integer(const Integer &other) {
    value = other.value;
}

Integer Integer::operator=(const Integer &other) {
    return value = other.value;
}

Integer Integer::operator+(int _value) {
    return value + _value;
}

Integer::operator int() {
    return (int)value;
}

std::ostream &operator<<(std::ostream &os, const Integer &lol) {
    os << lol.value;
    return os;
}

std::istream &operator>>(std::istream &os, Integer &lol) {
    os >> lol.value;
    return os;
}
