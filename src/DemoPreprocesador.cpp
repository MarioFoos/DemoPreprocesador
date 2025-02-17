//============================================================================
// Autor: Diardon
// Blog : https://diardon.wordpress.com/
//============================================================================

#include <iostream>		// Librería estándar
#include "MiClase.h"	// Mi clase

#if __has_include(<optional>)
    #include <optional>
#else
    // Código que se compila si <optional> no está disponible
#endif

using namespace std;

// Directiva específica del compilador
#pragma GCC optimize("O0")

#define PI 3.14159
#define CUADRADO(x) ((x)*(x))

#define GRAV 9.8
// Acá podemos usar GRAV
#undef GRAV
// Acá GRAV ya no está definida

#ifndef MI_MACRO
    #define MI_MACRO
    // Código que se incluye solo si MI_MACRO no estaba definida.
#endif

#define CODIGO1
//#define CODIGO2
//#define CODIGO3

#define CONFIGURACION

#ifndef CONFIGURACION
#error "La configuración necesaria no está definida."
#endif

void funcion()
{
    // Se indica que la siguiente línea corresponde a la línea 200 del archivo "codigo_generado.cpp"
    #line 200 "codigo_generado.cpp"
    std::cout << "Esta línea se reportará como la línea 200 del archivo codigo_generado.cpp." << std::endl;
}

#define LOG(format, ...) printf(format, __VA_ARGS__)

int main()
{
#ifdef DEBUG
    std::cout << "Debug activado" << std::endl;
#endif

#if defined CODIGO1
    std::cout << "Se compila el código 1" << std::endl;
#elif defined CODIGO2
    std::cout << "Se compila el código 2" << std::endl;
#else
    std::cout << "Se compila el código 3" << std::endl;
#endif

	float radio = 5;
	float area = PI*CUADRADO(radio);

	std::cout << "area: " << area << std::endl;

	std::cout << "Fecha: " << __DATE__ << std::endl << "Hora: " << __TIME__ << std::endl;
	std::cout << "Version: " << __cplusplus << std::endl;

	LOG("{%s, %d, %f}", "log", 7, 1.45);

	return 0;
}
