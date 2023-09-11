# Programa para validar cadenas en un lenguaje regular

## Manual de Usuario

**Universidad Autónoma de Nuevo León**  
*Facultad de Ciencias Físico Matemáticas*  

**Tutor:** Yazmany Jahaziel Guerrero Ceja  
**Fecha:** 11 de Septiembre del 2023

---

### Evidencia de Aprendizaje 1: Programa Computacional

**Grupo:** 32  
**Equipo:** 3  

**Integrantes:**
- Angel Francisco Hernandez Gamez
- Nallely Esmeralda Hernandez Ibarra
- Jesus Mario Salazar Sanchez
- Ricardo Hervey Estrada Garcia

## Descripción

Este programa en C++ permite verificar si una cadena de caracteres cumple con las reglas de un lenguaje regular específico. El programa solicita una cadena de entrada y verifica si cumple con las siguientes reglas:

1. El primer símbolo debe ser un dígito.
2. Puede contener cualquier combinación de letras y dígitos intermedios válidos en el alfabeto.
3. La cadena debe contener las iniciales del usuario de forma consecutiva al menos una vez.
4. Los últimos símbolos deben ser un punto seguido del número de matrícula completo.
5. La cadena puede aceptar puntos intermedios, pero no en forma consecutiva.

## Instrucciones para la ejecución:

## Requisitos

- Acceso a una computadora con un sistema operativo compatible.
- Tener instalada una ventana de terminal o una línea de comandos en tu sistema operativo.

## Descarga del archivo

Para empezar, debes descargar el archivo "Evidencia1TeoAut.exe" del repositorio de GitHub. Sigue estos pasos:

1. Accede al repositorio de GitHub donde se encuentra el archivo.
2. Busca y haz clic en el botón "Download" o "Descargar" para obtener una copia del archivo en tu computadora.

## Ejecución del programa

Una vez que hayas descargado el archivo "Evidencia1TeoAut.exe", sigue estos pasos para ejecutar el programa:

1. Abre una ventana de terminal o una línea de comandos en tu sistema operativo.
2. Navega hasta la ubicación donde hayas guardado el archivo "Evidencia1TeoAut.exe".
3. Para ejecutar el programa, ingresa el siguiente comando en la línea de comandos: `Evidencia1TeoAut.exe`.

El programa mostrará un mensaje de bienvenida y te solicitará ingresar tu nombre completo y tu número de matrícula. Asegúrate de ingresar la información correctamente según las indicaciones.

Ejemplo:

```
Bienvenido al Programa de Verificación de Cadenas

Por favor, ingrese su nombre completo: Yazmany Guerrero Ceja
Por favor, ingrese su número de matrícula completo: 1339767
```

## Verificación de cadenas

Una vez que hayas ingresado tu información de nombre y número de matrícula, el programa te pedirá que ingreses una cadena de texto para verificar si es válida o no. Asegúrate de ingresar la cadena correctamente según las indicaciones.

Ejemplo 1 (una cadena válida):

```
Ingrese una cadena para verificar si es válida: 1yazmanyjahazielg.1339767

Resultado 1: La cadena es válida.
```

Ejemplo 2 (una cadena inválida):

```
Ingrese una cadena para verificar si es válida: yazmanyjahazielg.1339767

Resultado 2: La cadena no es válida.
```

Después de obtener el resultado, el programa te dará la opción de solicitar otra cadena de entrada para analizar. Ingresa "s" si deseas analizar otra cadena o "n" si no deseas analizar más cadenas.

Ejemplo:

```
¿Desea analizar otra cadena? (s/n): s

Ingrese una cadena para verificar si es válida: yazmanyjahazielg.1.1339767

La cadena no es válida.

¿Desea analizar otra cadena? (s/n): n
```

Si ingresaste "s" para analizar otra cadena, el programa te solicitará la nueva cadena de entrada y el proceso de verificación se repetirá. Si ingresaste "n", el programa se cerrará.

¡Ahora puedes ejecutar el programa y verificar varias cadenas según tus necesidades!

Nota: Asegúrate de seguir las indicaciones en el programa y proporcionar la información solicitada correctamente.