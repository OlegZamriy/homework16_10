#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	std::cout << "Продам цуценят." << "\n";
	std::cout << "Порода ротвейлер." << "\n";
	std::cout << "....." << "\n";
	std::cout << "Тел.: 222-22-22" << "\n";
	std::cout << "222 \t|  222  |" << "\n";
	std::cout << "22 \t";
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	std::cout << "|   22  |"<< "\n";
	std::cout << "22 \t";
	std::cout << "|   22  |" << "\n";
	 



return 0;
}