#pragma once
#include "Car.h"
#include "Recycling.h"
#include "Stores.h"
#include "Garbage.h"
#include "JobSheet.h"
class Technician
{
public:
	Technician() {}

	JobSheet service(Car* car) {
		JobSheet temp;
		std::cout << "finished servicing car but pretending it takes longer so customer can drink coffee \n";
		return temp;
	}
};

