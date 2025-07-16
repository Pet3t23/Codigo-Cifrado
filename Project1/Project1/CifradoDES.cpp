/**
 * @file CifradoDES.cpp
 * @brief Implementación de la clase para un cifrado DES simulado.
 */

#include "CifradoDES.h"

CifradoDES::CifradoDES(const std::string& clave) : clave(clave) {}

std::string CifradoDES::aplicarXOR(const std::string& texto) {
    std::string resultado = texto;
    size_t claveLen = clave.length();

    for (size_t i = 0; i < resultado.size(); ++i) {
        resultado[i] = resultado[i] ^ clave[i % claveLen];
    }
    return resultado;
}

std::string CifradoDES::cifrar(const std::string& texto) {
    // En esta simulación, el cifrado es aplicar XOR con la clave
    return aplicarXOR(texto);
}

std::string CifradoDES::descifrar(const std::string& texto) {
    // El descifrado es la misma operación XOR con la clave
    return aplicarXOR(texto);
}
