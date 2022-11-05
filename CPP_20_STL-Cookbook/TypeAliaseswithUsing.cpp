//book example
//C++20 STL
#include "vector"
#include "string"

//abbreviated long type name
typedef std::vector<std::pair<int,std::string>>::iterator vecit_t;

using vecit_t = std::vector<std::pair<int,std::string>>::iterator;

//a using may be templated
template<typename T>
using v = std::vector<T>;
v<int> x{};

//New C++20 Features
//Format() library
//printf and iostream library are now used with format(), inspired by
//python3's formatter
#include <format>
#include <numbers>
#include <iostream>

int main() {
	std::string who{ "everyone" };
	unsigned int ival{ 42 };
	double pi{ std::numbers::pi };

	std::string greeting = std::format("Hello, {}!\n ", who); //Hello, everyone!
	std::string num = std::format("Integer: {}!\n ", ival);
	std::string pie = std::format("π: {}!\n ", pi);

	std::cout << greeting << num << pie << std::endl;
}
