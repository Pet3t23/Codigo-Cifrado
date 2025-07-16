/**
 * @file CifradoVigenere.cpp
 * @brief Implementación de la clase para el cifrado Vigenère.
 */

#include "CifradoVigenere.h"
#include <cctype>

CifradoVigenere::CifradoVigenere(const std::string& clave) : clave(clave) {}

std::string CifradoVigenere::ajustarClave(const std::string& texto) {
    std::string claveExtendida;
    size_t j = 0;
    for (size_t i = 0; i < texto.size(); ++i) {
        if (isalpha(texto[i])) {
            claveExtendida += clave[j % clave.size()];
            j++;
        }
        else {
            claveExtendida += texto[i]; // Mantiene espacios y símbolos
        }
    }
    return claveExtendida;
}

std::string CifradoVigenere::cifrar(const std::string& texto) {
    std::string resultado;
    std::string claveAjustada = ajustarClave(texto);

    for (size_t i = 0; i < texto.size(); ++i) {
        char c = texto[i];
        char k = claveAjustada[i];
        if (isalpha(c)) {
            bool mayuscula = isupper(c);
            c = toupper(c);
            k = toupper(k);
            char cCifrado = (c - 'A' + k - 'A') % 26 + 'A';
            resultado += mayuscula ? cCifrado : tolower(cCifrado);
        }
        else {
            resultado += c;
        }
    }
    return resultado;
}

std::string CifradoVigenere::descifrar(const std::string& texto) {
    std::string resultado;
    std::string claveAjustada = ajustarClave(texto);

    for (size_t i = 0; i < texto.size(); ++i) {
        char c = texto[i];
        char k = claveAjustada[i];
        if (isalpha(c)) {
            bool mayuscula = isupper(c);
            c = toupper(c);
            k = toupper(k);
            char cDescifrado = (c - k + 26) % 26 + 'A';
            resultado += mayuscula ? cDescifrado : tolower(cDescifrado);
        }
        else {
            resultado += c;
        }
    }
    return resultado;
}
