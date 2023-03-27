#include <iostream> 
#include <string> 
#include <windows.h> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name;
	cout << "Введите имя: ";
	cin >> name;

	cout << "Здравствуйте, " << name << "!";
}
