/**
 * @file CifradoCesar.cpp
 * @brief Implementación de la clase para el cifrado César.
 */

#include "CifradoCesar.h"

CifradoCesar::CifradoCesar(int despl) : desplazamiento(despl % 26) {}

std::string CifradoCesar::cifrar(const std::string& texto) {
    std::string resultado;

    for (char c : texto) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            resultado += static_cast<char>((c - base + desplazamiento + 26) % 26 + base);
        }
        else {
            resultado += c;
        }
    }

    return resultado;
}

std::string CifradoCesar::descifrar(const std::string& texto) {
    std::string resultado;

    for (char c : texto) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            resultado += static_cast<char>((c - base - desplazamiento + 26) % 26 + base);
        }
        else {
            resultado += c;
        }
    }

    return resultado;
}
