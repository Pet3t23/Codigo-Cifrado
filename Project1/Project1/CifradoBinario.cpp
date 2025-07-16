/**
 * @file CifradoBinario.cpp
 * @brief Implementación de la clase para convertir texto a binario y viceversa.
 */

#include "CifradoBinario.h"
#include <bitset>
#include <sstream>

std::string CifradoBinario::aBinario(const std::string& texto) {
    std::stringstream ss;
    for (char c : texto) {
        ss << std::bitset<8>(c);
    }
    return ss.str();
}

std::string CifradoBinario::aTexto(const std::string& binario) {
    std::stringstream ss;
    for (size_t i = 0; i < binario.length(); i += 8) {
        std::bitset<8> bits(binario.substr(i, 8));
        ss << static_cast<char>(bits.to_ulong());
    }
    return ss.str();
}
