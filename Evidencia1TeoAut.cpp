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
	cout << cadena;
	
}
