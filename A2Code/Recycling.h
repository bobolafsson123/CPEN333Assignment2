#pragma once
#include "Oil.h"
#include "TireBatch.h"
class Recycling
{
private:
	void write(std::string message) {
		std::cout << "Recycling: " << message << std::endl;
	}
public:
	void recycle(Oil oldOil) {
		write("oldOil disposed");
	}
	void recycle(TireBatch tireBatch) {
		write("old tireBatch disposed");
	}
};

