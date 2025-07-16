/**
 * @file CifradoDES.h
 * @brief Declaración de la clase para un cifrado DES simulado.
 */

#ifndef CIFRADODES_H
#define CIFRADODES_H

#include <string>

 /**
  * @class CifradoDES
  * @brief Simulación simple del cifrado DES utilizando clave para cifrar y descifrar.
  */
class CifradoDES {
private:
    std::string clave; ///< Clave para cifrado/descifrado

    /**
     * @brief Método auxiliar para hacer una operación XOR byte a byte con la clave.
     * @param texto Texto a procesar.
     * @return Texto procesado.
     */
    std::string aplicarXOR(const std::string& texto);

public:
    /**
     * @brief Constructor que recibe la clave para el cifrado.
     * @param clave Clave usada para cifrar/descifrar.
     */
    CifradoDES(const std::string& clave);

    /**
     * @brief Cifra un texto usando el cifrado DES simulado.
     * @param texto Texto plano.
     * @return Texto cifrado.
     */
    std::string cifrar(const std::string& texto);

    /**
     * @brief Descifra un texto cifrado con DES simulado.
     * @param texto Texto cifrado.
     * @return Texto descifrado.
     */
    std::string descifrar(const std::string& texto);
};

#endif
