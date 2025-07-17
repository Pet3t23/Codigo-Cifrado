Proyecto Cifrado de Archivos en C++
Descripción
Este proyecto es una aplicación en C++ para cifrar y descifrar archivos de texto usando varios métodos de cifrado clásicos y modernos simulados, incluyendo:

Cifrado César

Cifrado XOR

Conversión ASCII a Binario

Cifrado DES simulado

Cifrado Vigenère

El programa permite al usuario elegir el método de cifrado, ingresar una clave (cuando se requiere) y seleccionar si desea cifrar o descifrar un archivo.

Estructura de carpetas
DatosCrudos/: Carpeta donde debes colocar los archivos de texto originales que quieres cifrar.
Ejemplos de archivos: cesar.txt, xor.txt, ascii.txt, des.txt, vigenere.txt.

DatosCifrados/: Carpeta vacía donde el programa guardará los archivos cifrados o descifrados generados automáticamente.

Cómo usar el programa
Ejecuta el programa.

Selecciona el método de cifrado que deseas usar (opción del 1 al 5).

Cuando se solicite, ingresa la clave, en este proyecto siempre usa la letra P como clave para todos los métodos que requieren una clave.

Para Cifrado César: P se usa como valor numérico desplazamiento (puedes ingresar su valor ASCII, que es 80, o simplemente ingresar 15 si quieres algo más simple). Para estandarizar, puedes ingresar siempre 15 (el programa pide un entero).

Para Cifrado XOR: ingresa el carácter P.

Para Cifrado DES simulado y Vigenère: ingresa la cadena P.

Elige si deseas cifrar (opción 1) o descifrar (opción 2).

El programa leerá el archivo correspondiente de la carpeta DatosCrudos, procesará el texto y guardará el resultado en la carpeta DatosCifrados.

Si descifras, el resultado se mostrará en pantalla.

Ejemplo de flujo
Seleccionas opción 1 (Cifrado César).

El programa te pregunta el desplazamiento: escribe 15.

Seleccionas cifrar.

El programa lee DatosCrudos\cesar.txt, cifra el contenido y guarda el resultado en DatosCifrados\cesar.txt.

Para descifrar, repites la operación eligiendo descifrar y el programa mostrará el texto original.

Notas importantes
Asegúrate que las carpetas DatosCrudos y DatosCifrados existan antes de ejecutar el programa.

El archivo original debe existir dentro de DatosCrudos con el nombre correcto (por ejemplo, cesar.txt para el cifrado César).

La clave para todos los métodos que la usan debe ser siempre la letra P, excepto para César que pide un número, ahí se recomienda usar 15.

Contacto
Si tienes dudas o problemas, puedes abrir un issue en el repositorio.
