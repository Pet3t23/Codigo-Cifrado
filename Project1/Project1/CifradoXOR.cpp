/**
 * @file CifradoXOR.cpp
 * @brief Implementación de la clase para el cifrado XOR.
 */

#include "CifradoXOR.h"

CifradoXOR::CifradoXOR(char c) : clave(c) {}

std::string CifradoXOR::aplicarXOR(const std::string& texto) {
    std::string resultado = texto;
    for (size_t i = 0; i < resultado.length(); ++i) {
        resultado[i] = resultado[i] ^ clave;
    }
    return resultado;
}
