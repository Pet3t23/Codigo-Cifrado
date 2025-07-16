/**
 * @file CifradoXOR.h
 * @brief Declaración de la clase para el cifrado XOR.
 */

#ifndef CIFRADOXOR_H
#define CIFRADOXOR_H

#include <string>

 /**
  * @class CifradoXOR
  * @brief Implementa cifrado y descifrado usando XOR con una clave de un carácter.
  */
class CifradoXOR {
private:
    char clave; ///< Clave de un solo carácter para XOR.

public:
    /**
     * @brief Constructor que recibe la clave XOR.
     * @param c Clave de un carácter.
     */
    CifradoXOR(char c);

    /**
     * @brief Cifra o descifra texto usando XOR.
     * @param texto Texto a procesar.
     * @return Texto resultante después del XOR.
     */
    std::string aplicarXOR(const std::string& texto);
};

#endif
