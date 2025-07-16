/**
 * @file CifradoVigenere.h
 * @brief Declaración de la clase para el cifrado Vigenère.
 */

#ifndef CIFRADOVIGENERE_H
#define CIFRADOVIGENERE_H

#include <string>

 /**
  * @class CifradoVigenere
  * @brief Implementa cifrado y descifrado con el método Vigenère.
  */
class CifradoVigenere {
private:
    std::string clave; ///< Clave usada para cifrado y descifrado.

    /**
     * @brief Ajusta la clave para que tenga la misma longitud que el texto.
     * @param texto Texto a cifrar o descifrar.
     * @return Clave ajustada.
     */
    std::string ajustarClave(const std::string& texto);

public:
    /**
     * @brief Constructor que recibe la clave.
     * @param clave Clave para el cifrado Vigenère.
     */
    CifradoVigenere(const std::string& clave);

    /**
     * @brief Cifra un texto con Vigenère.
     * @param texto Texto plano.
     * @return Texto cifrado.
     */
    std::string cifrar(const std::string& texto);

    /**
     * @brief Descifra un texto cifrado con Vigenère.
     * @param texto Texto cifrado.
     * @return Texto descifrado.
     */
    std::string descifrar(const std::string& texto);
};

#endif
