/**
 * @file CifradoXOR.h
 * @brief Declaraci�n de la clase para el cifrado XOR.
 */

#ifndef CIFRADOXOR_H
#define CIFRADOXOR_H

#include <string>

 /**
  * @class CifradoXOR
  * @brief Implementa cifrado y descifrado usando XOR con una clave de un car�cter.
  */
class CifradoXOR {
private:
    char clave; ///< Clave de un solo car�cter para XOR.

public:
    /**
     * @brief Constructor que recibe la clave XOR.
     * @param c Clave de un car�cter.
     */
    CifradoXOR(char c);

    /**
     * @brief Cifra o descifra texto usando XOR.
     * @param texto Texto a procesar.
     * @return Texto resultante despu�s del XOR.
     */
    std::string aplicarXOR(const std::string& texto);
};

#endif
