#include <iostream>
#include <windows.h>
#include <string>

int main(int argc, char** argv) {
	
	system("mode con:cols=70 lines=30");
	setlocale(LC_ALL, "Russian");
	
	std::string cmd, login, password, result;
	
	system("Title Access");
		
	std::cout << "Access in digital signature" << std::endl;
	std::cout << "Enter Login and Password for access" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter login:";
		std::cin >> login;
	std::cout << std::endl;
	std::cout << "Enter passwrod:";
		std::cin >> password;
	std::cout << std::endl;
	system(("net use \\\\ip_address /user:"+login+" "+ password).c_str());
	result = system(("net use \\\\ip_addres /user:"+login+" "+ password).c_str());
	if (result != "Command complete.") {
		std::cout << std::endl << "Îáðàòèòåñü ê ñèñòåìíîìó Àäìèíèñòðàòîðó" << std::endl << "Óëèöà Ïî÷òîâàÿ ä.4 ê.2-11" << std::endl << std::endl;
		system("pause");
	} else {
	Sleep(5000);
	exit;
		}	
	return 0;	
}
