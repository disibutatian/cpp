#include "singleton_1.h"


int main(int argc, char ** argv) {
	
	Singleton& ins = Singleton::Instance();
	ins.Print();
	std::cout <<"ins addr " << &ins << std::endl;

	Singleton& ins1 = Singleton::Instance();
	ins1.Print();
	std::cout <<"ins1 addr " << &ins << std::endl;

	return 0;
}
