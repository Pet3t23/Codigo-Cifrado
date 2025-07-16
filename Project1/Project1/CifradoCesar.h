/**
 * @file CifradoCesar.h
 * @brief Declaración de la clase para el cifrado César.
 */

#ifndef CIFRADOCESAR_H
#define CIFRADOCESAR_H

#include <string>

 /**
  * @class CifradoCesar
  * @brief Implementa el cifrado César con desplazamiento configurable.
  */
class CifradoCesar {
private:
    int desplazamiento; ///< Valor del desplazamiento para el cifrado.

public:
    /**
     * @brief Constructor que establece el desplazamiento.
     * @param despl Valor entero del desplazamiento.
     */
    CifradoCesar(int despl);

    /**
     * @brief Cifra un texto utilizando el cifrado César.
     * @param texto Texto a cifrar.
     * @return Texto cifrado.
     */
    std::string cifrar(const std::string& texto);

    /**
     * @brief Descifra un texto utilizando el cifrado César.
     * @param texto Texto cifrado.
     * @return Texto original descifrado.
     */
    std::string descifrar(const std::string& texto);
};

#endif
