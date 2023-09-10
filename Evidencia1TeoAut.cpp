#include <iostream>
#include <string>

using namespace std;

main(){
	string nombre;
	string cadena;
	int matricula = 0;
	
	cout<< "Programa de Teoria de Automatas" << endl;
	cout << "\nPrimero vamos a necesitar tu nombre y matricula para obtener el alfabeto\n";
	cout<< "Introduce tu nombre completo: ";
	getline(cin, nombre);
	cout << "Gracias\nAhora Introduce tu matricula: ";
	cin >> matricula;
	
	//Aqui va donde se crearia el alfabeto con las funciones
	
	cout << "Listo, ya tenemos el alfabeto, ahora ingresa una cadena de texto" << endl;
	cout << "para revisar si es valida o no\nCadena: ";
	cin.sync();
	getline(cin, cadena);
	
	
}

//como debe ir las funciones para ver si la cadena es valida:
//1. se crea una lista para guardar los caracteres del nombre, donde del string nombre se obtendra letra por letra
// al obtener el primer caracter del string, hay que guardarlo en la lista, el siguiente caracter hay que veriicar si no existe
// asi con todos los caracteres. se hace lo mismo para los numeros de la matricula pero sera en otra lista
//2. obtienes la cadena a validar, primero te encargas de recorrer el string caracter por caracter con un ciclo
// en la primera pos revisas que el caracter sea un numero y que el numero este en el alfabeto
// despues en las siguientes pos, los carcteres pueden ser aleatorios, por lo que solo se va a verificar que los caracteres existan en el alfabeto
// dentro de esos caracteres debe ir almeos una vez las iniciales del nombre del usuario, por lo que al estare checando que los caracteres
// existan en el alfabeto, hay que tener una funcion para que cuando se detecte la primera letra de la inicial del usuario esta 
// empieza a revisar las siguientes caracteres para ver si es que son las iniciales, si los caracteres no coinciden con la inicial,
// esta funcion no haria nada, pero si si cumple esta regresara algun valor booleando donde se sabra para ya aparecieron para asi poder continuar
// al final debe estar un punto seguido de la matricula del usuario, se tiene que revisar eso con una funcion parecida, donde se tenga en cuenta
// la longitud de la matricula + 1, y la longitud de la cadena, donde si la posicion > (longitud de la cadena)- longitud de la matricula
// quiere decir que la cadena no seria valida y se dentendria el proceso.
