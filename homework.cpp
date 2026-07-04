#include <iostream>
#include <cstdint>
#include <string>
using namespace std;


int convert(int y) {
    return y;
}

int main() {
    std::cout << "enter name" << endl;
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    int y{ static_cast<int>(std::ssize(name)) };

    std::cout << "enter your age" << endl;
    int x{};
    std::cin >> x;

    std::cout << "your age + length of name is:" << x + y;


    return 0;
}