#include <iostream>
#include "IntroCPP.h";

using namespace std;

struct Student
{

	int age;

	public:Student()
	{
		age = 0;
	}
};

int main()
{
	std::cout << "Please Input A value: ";
	int input = std::cin.get();
	std::cout << "User Input Was: " << input << endl;

	bool test = false;

	Rectangle myRect(5, 5);
	
	int area = myRect.GetArea();
	std::cout << area;

	//0 -> va bene
	// -1 -> errore
	//codice specifico per indicare l'errore
	return 0;
}