//
// Created by CABRIGI on 4/11/2020.
//

#include "Integer.h"

Integer::Integer() {
}

Integer::Integer(int _value) {
    value = _value;
}

Integer::Integer(const Integer& other) {
    value = other.value;
}

Integer operator=(const Integer& other) {

}

Integer operator+(int x) {
}


Integer::operator int() {

}

//NO ME ACORDABA NADA DE SOBRECARGA DE OPERADORES. VI TODOS LOS VIDEOS QUE PUDE/ LEI TUTORIALES EN INTERNET
//Y ELLOS LO HACIAN DIFERENTE O CON STRUCT
//NO SE COMO HACER PARA PODER ACCEDER AL VALUE Y TMB ME TIRA ERRORES EN LOS PARAMETROS DE LA SOBRECARGA IDK
//QUIERO VER COMO SE HACE EN LA CLASE. ESTE ES MI UNICO DESEO ANTES DE MORIR

