/**
 * @file main.cpp
 * @brief Proyecto de cifrado de archivos usando múltiples métodos en C++.
 *
 * Permite al usuario seleccionar entre varios algoritmos de cifrado
 * para proteger y recuperar archivos de texto. Documentado con Doxygen.
 */

#include <iostream>
#include <fstream>
#include <string>
#include "CifradoCesar.h"
#include "CifradoXOR.h"
#include "CifradoBinario.h"
#include "CifradoDES.h"
#include "CifradoVigenere.h"

 /**
  * @brief Muestra el menú principal con los métodos de cifrado disponibles.
  */
void mostrarMenuPrincipal() {
    std::cout << "=== PROYECTO CIFRADO DE ARCHIVOS ===\n";
    std::cout << "Selecciona el método de cifrado:\n";
    std::cout << "1. Cifrado César\n";
    std::cout << "2. Cifrado XOR\n";
    std::cout << "3. ASCII a Binario\n";
    std::cout << "4. Cifrado DES simulado\n";
    std::cout << "5. Cifrado Vigenère\n";
    std::cout << "0. Salir\n";
    std::cout << "Opción: ";
}

/**
 * @brief Muestra el submenú para elegir entre cifrar o descifrar.
 * @return true si se elige cifrar, false si se elige descifrar.
 */
bool mostrarSubmenuAccion() {
    int accion = -1;
    std::cout << "\n¿Qué deseas hacer?\n";
    std::cout << "1. Cifrar archivo\n";
    std::cout << "2. Descifrar archivo\n";
    std::cout << "Opción: ";
    std::cin >> accion;
    return accion == 1;
}

/**
 * @brief Lee el contenido de un archivo de texto.
 * @param ruta Ruta del archivo.
 * @return std::string Contenido del archivo.
 */
std::string leerArchivo(const std::string& ruta) {
    std::ifstream archivo(ruta);
    if (!archivo.is_open()) {
        std::cerr << "❌ Error: No se pudo abrir el archivo para leer: " << ruta << std::endl;
        return "";
    }
    std::string contenido((std::istreambuf_iterator<char>(archivo)), std::istreambuf_iterator<char>());
    archivo.close();
    return contenido;
}

/**
 * @brief Escribe texto en un archivo.
 * @param ruta Ruta del archivo.
 * @param contenido Texto a escribir.
 */
void escribirArchivo(const std::string& ruta, const std::string& contenido) {
    std::ofstream archivo(ruta);
    if (!archivo.is_open()) {
        std::cerr << "❌ Error: No se pudo abrir para escribir el archivo: " << ruta << std::endl;
        return;
    }
    archivo << contenido;
    archivo.close();
}

/**
 * @brief Función principal del programa.
 */
int main() {
    int opcion = -1;

    do {
        mostrarMenuPrincipal();
        std::cin >> opcion;

        std::string rutaCrudo, rutaCifrado;
        std::string entrada, salida;

        switch (opcion) {
        case 1: { // Cifrado César
            rutaCrudo = "Datos/Cesar/crudo.txt";
            rutaCifrado = "Datos/Cesar/cifrado.txt";

            std::cout << "\n[César] Ingrese el desplazamiento: ";
            int clave;
            std::cin >> clave;
            CifradoCesar cesar(clave);

            if (mostrarSubmenuAccion()) {
                entrada = leerArchivo(rutaCrudo);
                if (entrada.empty()) {
                    std::cerr << "❌ No se pudo leer el archivo crudo. Abortando.\n";
                    break;
                }
                salida = cesar.cifrar(entrada);
                if (salida.empty()) {
                    std::cerr << "❌ La función cifrar devolvió cadena vacía. Abortando.\n";
                    break;
                }
                escribirArchivo(rutaCifrado, salida);
                std::cout << "\n Texto cifrado guardado en " << rutaCifrado << "\n";
            }
            else {
                entrada = leerArchivo(rutaCifrado);
                if (entrada.empty()) {
                    std::cerr << "❌ No se pudo leer el archivo cifrado. Abortando.\n";
                    break;
                }
                salida = cesar.descifrar(entrada);
                std::cout << "\n Texto descifrado:\n" << salida << "\n";
            }
            break;
        }

        case 2: { // Cifrado XOR
            rutaCrudo = "Datos/xor/crudo.txt";
            rutaCifrado = "Datos/xor/cifrado.txt";

            std::cout << "\n[XOR] Ingrese la clave (un solo carácter): ";
            char clave;
            std::cin >> clave;
            CifradoXOR xorCifrado(clave);

            if (mostrarSubmenuAccion()) {
                entrada = leerArchivo(rutaCrudo);
                if (entrada.empty()) {
                    std::cerr << "❌ No se pudo leer el archivo crudo. Abortando.\n";
                    break;
                }
                salida = xorCifrado.aplicarXOR(entrada);
                if (salida.empty()) {
                    std::cerr << "❌ La función aplicarXOR devolvió cadena vacía. Abortando.\n";
                    break;
                }
                escribirArchivo(rutaCifrado, salida);
                std::cout << "\n Texto cifrado guardado en " << rutaCifrado << "\n";
            }
            else {
                entrada = leerArchivo(rutaCifrado);
                if (entrada.empty()) {
                    std::cerr << "❌ No se pudo leer el archivo cifrado. Abortando.\n";
                    break;
                }
                salida = xorCifrado.aplicarXOR(entrada);
                std::cout << "\n Texto descifrado:\n" << salida << "\n";
            }
            break;
        }

        case 3: { // ASCII a binario
            rutaCrudo = "Datos/ascii/crudo.txt";
            rutaCifrado = "Datos/ascii/cifrado.txt";

            if (mostrarSubmenuAccion()) {
                entrada = leerArchivo(rutaCrudo);
                if (entrada.empty()) {
                    std::cerr << "❌ No se pudo leer el archivo crudo. Abortando.\n";
                    break;
                }
                salida = CifradoBinario::aBinario(entrada);
                if (salida.empty()) {
                    std::cerr << "❌ La función aBinario devolvió cadena vacía. Abortando.\n";
                    break;
                }
                escribirArchivo(rutaCifrado, salida);
                std::cout << "\n Texto convertido a binario y guardado en " << rutaCifrado << "\n";
            }
            else {
                entrada = leerArchivo(rutaCifrado);
                if (entrada.empty()) {
                    std::cerr << "❌ No se pudo leer el archivo cifrado. Abortando.\n";
                    break;
                }
                salida = CifradoBinario::aTexto(entrada);
                std::cout << "\n Texto recuperado desde binario:\n" << salida << "\n";
            }
            break;
        }

        case 4: { // Cifrado DES simulado
            rutaCrudo = "Datos/des/crudo.txt";
            rutaCifrado = "Datos/des/cifrado.txt";

            std::cout << "\n[ DES simulado] Ingresa la clave: ";
            std::string clave;
            std::cin.ignore();
            std::getline(std::cin, clave);
            CifradoDES des(clave);

            if (mostrarSubmenuAccion()) {
                entrada = leerArchivo(rutaCrudo);
                if (entrada.empty()) {
                    std::cerr << "❌ No se pudo leer el archivo crudo. Abortando.\n";
                    break;
                }
                salida = des.cifrar(entrada);
                if (salida.empty()) {
                    std::cerr << "❌ La función cifrar devolvió cadena vacía. Abortando.\n";
                    break;
                }
                escribirArchivo(rutaCifrado, salida);
                std::cout << "\n Texto cifrado guardado en " << rutaCifrado << "\n";
            }
            else {
                entrada = leerArchivo(rutaCifrado);
                if (entrada.empty()) {
                    std::cerr << "❌ No se pudo leer el archivo cifrado. Abortando.\n";
                    break;
                }
                salida = des.descifrar(entrada);
                std::cout << "\n Texto descifrado:\n" << salida << "\n";
            }
            break;
        }

        case 5: { // Cifrado Vigenère
            rutaCrudo = "Datos/vigenere/crudo.txt";
            rutaCifrado = "Datos/vigenere/cifrado.txt";

            std::cout << "\n[ Vigenère] Ingresa la clave: ";
            std::string clave;
            std::cin.ignore();
            std::getline(std::cin, clave);
            CifradoVigenere vigenere(clave);

            if (mostrarSubmenuAccion()) {
                entrada = leerArchivo(rutaCrudo);
                if (entrada.empty()) {
                    std::cerr << "❌ No se pudo leer el archivo crudo. Abortando.\n";
                    break;
                }
                salida = vigenere.cifrar(entrada);
                if (salida.empty()) {
                    std::cerr << "❌ La función cifrar devolvió cadena vacía. Abortando.\n";
                    break;
                }
                escribirArchivo(rutaCifrado, salida);
                std::cout << "\n Texto cifrado guardado en " << rutaCifrado << "\n";
            }
            else {
                entrada = leerArchivo(rutaCifrado);
                if (entrada.empty()) {
                    std::cerr << "❌ No se pudo leer el archivo cifrado. Abortando.\n";
                    break;
                }
                salida = vigenere.descifrar(entrada);
                std::cout << "\n Texto descifrado:\n" << salida << "\n";
            }
            break;
        }

        case 0:
            std::cout << " Saliendo del programa...\n";
            break;

        default:
            std::cout << " Opción inválida. Intenta nuevamente.\n";
            break;
        }

        std::cout << "\n-----------------------------------\n";

    } while (opcion != 0);

    return 0;
}
