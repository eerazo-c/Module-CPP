#include <algorithm>
#include <iostream>

class persona {
	private:
		int edad;
		std::string name;
	public:
		persona(int, std::string);
		void leer();
		void correr();
};

persona::persona(int _edad, std::string _name){
	edad = _edad;
	name = _name;;
}

void persona::leer(){
	std::cout << "Soy " << name << " y estoy leyendo un libro" << std::endl;
}

void persona ::correr(){
	std::cout << "Soy " << name << " y estoy corriedo una maraton" << std::endl;
}

int main(void)
{
	persona p1 = persona(24, "eli");
	p1.leer();

	return (0);
}
