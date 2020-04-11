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

Integer Integer::operator+(const Integer &other) {
    return Integer();
}

Integer Integer::operator=(int x) {
    return Integer();
}

Integer::operator int() {
    return 0;
}

//ESTOY CONFUNDIDO NO SE COMO HACER ESTO
