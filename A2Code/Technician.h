#pragma once
#include "Car.h"
#include "Recycling.h"
#include "Store.h"
#include "Garbage.h"
#include "JobSheet.h"
#include <string>
#include<iostream>
class Technician
{
private:
	Store* store;
	Car* car;
	Recycling* recycling;
	Garbage* garbage;

	void write(std::string message) {
		std::cout << "Technician: " << message << std::endl;
	}

public:
	Technician() {}

	//requires: car is not null
	//modifies: car
	//effect: oil,oil filter and air filter in car are swapped regardless of condition. Tires on car are swapped if worn, else rotated. Returns job sheet generated by service
	JobSheet service(Car* car) {
		JobSheet temp;
		this->car = car;
		write("finished servicing car but pretending it takes longer so customer can drink coffee");
		return temp;
	}
};

