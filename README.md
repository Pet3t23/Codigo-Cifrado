🔐 Proyecto de Cifrado de Archivos en C++
📌 Introducción
Este proyecto en C++ tiene como objetivo aplicar distintos algoritmos de cifrado sobre archivos de texto. Está diseñado para:

Leer archivos ubicados en una carpeta específica (DatosCrudos/)

Aplicarles un cifrado según su nombre

Guardar los resultados cifrados en otra carpeta (DatosCifrados/)

Este proyecto es ideal como práctica de:

Conceptos básicos de seguridad informática

Manipulación de archivos

Programación modular en C++

⚙️ ¿Cómo funciona?
El programa lee automáticamente los archivos de texto en la carpeta DatosCrudos/.

Según el nombre del archivo, se aplica un tipo de cifrado específico:

ascii.txt → Conversión simple a valores ASCII

cesar.txt → Cifrado César

xor.txt → Cifrado XOR

vigenere.txt → Cifrado Vigenère

des.txt → Cifrado DES (simulado)

Los archivos cifrados se guardan en la carpeta DatosCifrados/.

🔐 Métodos de Cifrado Implementados
🔸 ASCII
Convierte cada carácter del archivo a su valor decimal ASCII, separados por espacios.

🔸 Cifrado César
Desplaza cada letra del alfabeto por un valor fijo.
En este caso, el desplazamiento se basa en la letra P.

🔸 Cifrado XOR
Aplica la operación lógica XOR carácter por carácter, usando como clave la letra P.

🔸 Cifrado Vigenère
Utiliza una clave repetida (la letra P) para cifrar el texto con una variante del cifrado César por carácter.

🔸 Cifrado DES (Simulado)
No es el algoritmo DES real.
Este método reordena los caracteres como una simulación de un proceso de sustitución.

🔑 Clave Usada
Para todos los algoritmos que requieren una clave (César, XOR y Vigenère), se utiliza la misma:

Clave: P

👤 Autor
Alejandro Aldair León Reséndiz
Estudiante de Ingeniería en Aplicaciones y Videojuegos
Universidad Cuauhtémoc Querétaro (UCQ)

