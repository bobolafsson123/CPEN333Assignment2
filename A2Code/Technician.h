#pragma once
#include "Car.h"
#include "Recycling.h"
#include "Store.h"
#include "Garbage.h"
#include "JobSheet.h"
class Technician
{
private:
	Store* store;
	Car* car;
	Recycling* recycling;
	Garbage* garbage;
	JobSheet* jobSheet;

	void write(std::string message) {
		std::cout << "Technician: " << message << std::endl;
	}

public:
	Technician() {}

	JobSheet service(Car* car) {
		JobSheet temp;
		this->car = car;
		write("finished servicing car but pretending it takes longer so customer can drink coffee");
		return temp;
	}
};

