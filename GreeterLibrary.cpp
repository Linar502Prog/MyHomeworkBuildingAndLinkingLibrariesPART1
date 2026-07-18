#include"GreeterLibrary.h"
#include<iostream>
#include <format>
namespace GreeterLibrary {
	std::string Greeter::greet(std::string name) {
		return std::format("Здравствуйте, {}!", name);
	}
}
