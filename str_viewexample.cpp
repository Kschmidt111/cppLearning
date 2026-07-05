#include <iostream>
#include <string>     
#include <string_view>
#include <algorithm>

using namespace std::string_view_literals;

void useStrViewer(std::string_view str) {

	std::cout << str << '\n';

}

std::string getName(int num)
{
    std::cout << "Enter the name of person #" << num << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name); // read a full line of text into name

    return name;
}

int getAge(std::string_view sv)
{
    std::cout << "Enter the age of " << sv << ": ";
    int age{};
    std::cin >> age;

    return age;
}

void printOlder(std::string_view name1, int age1, std::string_view name2, int age2)
{
    if (age1 > age2)
        std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ").\n";
    else
        std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << ").\n";
}

void nameAndAge()
{
    const std::string nameOne{ getName(1) };
    const int ageOne{ getAge(nameOne) };

    const std::string nameTwo{ getName(2) };
    const int ageTwo{ getAge(nameTwo) };

    printOlder(nameOne, ageOne, nameTwo, ageTwo);



}