#include "homework_helpers.h"
#include <iostream>
#include <string>
#include <limits>

int convert(int y) {
	return y;
}

std::string readName() {
	std::cout << "enter name" << std::endl;
	std::string name{};
	std::getline(std::cin >> std::ws, name);
	return name;
}

int readAge() {
	std::cout << "enter your age" << std::endl;
	int x{};
	while (!(std::cin >> x)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input. Enter a number: ";
	}
	return convert(x);
}

void greet(const std::string& name, int age) {
	std::cout << "Hello, " << name << ". You are " << age << " years old." << std::endl;
}

int run() {
	std::string name = readName();
	int age = readAge();
	int y = static_cast<int>(name.size());
	std::cout << "your age + length of name is:" << age + y << std::endl;
	return 0;
}
