/**
 * @file CifradoBinario.h
 * @brief Declaración de la clase para convertir texto a binario y viceversa.
 */

#ifndef CIFRADOBINARIO_H
#define CIFRADOBINARIO_H

#include <string>

 /**
  * @class CifradoBinario
  * @brief Convierte texto plano a binario y binario a texto.
  */
class CifradoBinario {
public:
    /**
     * @brief Convierte texto a su representación binaria.
     * @param texto Texto a convertir.
     * @return Cadena binaria.
     */
    static std::string aBinario(const std::string& texto);

    /**
     * @brief Convierte una cadena binaria a texto ASCII.
     * @param binario Cadena binaria.
     * @return Texto original.
     */
    static std::string aTexto(const std::string& binario);
};

#endif
