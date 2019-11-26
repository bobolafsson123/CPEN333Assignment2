#pragma once
#include <iostream>
class Garbage
{
private:
	void write(std::string message) {
		std::cout << "Garbage: " << message << std::endl;
	}
public:
	void recycle(bool filter) {
		write("filter disposed");
	}

};

