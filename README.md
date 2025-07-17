Proyecto de Cifrado de Archivos en C++
📌 Introducción
Este proyecto en C++ tiene como objetivo aplicar distintos algoritmos de cifrado sobre archivos de texto. Está diseñado para leer archivos ubicados en una carpeta específica, aplicarles un cifrado y guardar los resultados en otra carpeta. Es ideal como práctica de conceptos de seguridad básica, manipulación de archivos y programación modular en C++.

⚙️ ¿Cómo funciona?
El programa lee los archivos de texto que se encuentran en la carpeta DatosCrudos/.

Según el nombre del archivo, se le aplica un tipo de cifrado específico:

ascii.txt → Conversión simple a valores ASCII.

cesar.txt → Cifrado César.

xor.txt → Cifrado XOR.

vigenere.txt → Cifrado Vigenère.

des.txt → Cifrado DES simulado (no es DES real).

Cada archivo cifrado se guarda con un nuevo nombre en la carpeta DatosCifrados/.

🔐 Métodos de cifrado implementados
ASCII
Convierte cada carácter del archivo a su valor decimal ASCII, separados por espacios.

Cifrado César
Desplaza cada letra del alfabeto por un valor fijo. En este caso, el desplazamiento se hace con base en la letra P.

Cifrado XOR
Aplica la operación lógica XOR carácter por carácter, usando como clave la letra P.

Cifrado Vigenère
Utiliza una clave (la letra P) repetida para cifrar el texto con una variante del cifrado César por carácter.

Cifrado DES (Simulado)
No es el algoritmo DES real. Este cifrado simplemente intercambia el orden de los caracteres como una simulación de un proceso de sustitución.

🔑 Clave usada
Para todos los algoritmos que requieren clave (XOR, Vigenère y César), se utiliza la misma letra:

Clave utilizada: P

👤 Autor
Alejandro Aldair León Reséndiz
Estudiante de Ingeniería en Aplicaciones y Videojuegos - UCQ

