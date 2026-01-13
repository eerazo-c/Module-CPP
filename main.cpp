#include <iostream>

//using namespace std;
//imprimir cosas
/*
int main()
{
	std::cout << "hola soy eli" << std::endl << "HELLO WORLD" << std::endl;
	std::cout << "2 + 2" << std::endl << 2 + 2;
	return (0);
}
*/

/*
//uso de variables
int main()
{
	int edad = 24;
	char c = 'E';
	const char *name = "Elizabeth";
	const char *primer_apellido = "Erazo";
	const char *segundo_apellido = "Chacon";
	const char *name_user = "elerazo-";
	const char *correo = "elerazo-@student.42barcelona.com";

	std::cout << "Information" << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Apellido: " << primer_apellido << std::endl;
	std::cout << "Segundo apellido: " << segundo_apellido << std::endl;
	std::cout << "Correo: " << correo << std::endl;
	std::cout << "User: " << name_user << std::endl;
	std::cout << "Edad: " << edad << std::endl;
	std::cout << "Inicial: " << c << std::endl;

	return 0;
}
*/

//operadores
/*
int main()
{
	int a = 8;
	int b = 2;

	if (a < b)
	std::cout << "resultado " << a + b;
	else 
		std::cout << "Hola";
	
	return 0;
}
*/

int main()
{
	int n1;
	int n2;
	int suma;

	std::cout << "ingrese numero: ";
	std::cin >> n1;
	std::cout << "ingrese otro numero";
	std::cin >> n2;
	suma = n1 + n2;

	std::cout << "La suma es: " << suma;

	return (0);
}
