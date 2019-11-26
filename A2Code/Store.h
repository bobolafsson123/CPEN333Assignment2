#pragma once
#include "Oil.h"
#include "TireBatch.h"
#include <iostream>
class Store
{
public:
	Oil getOil(std::string type, int quantity) {
		Oil to_return{ type,quantity };
		return to_return;
	}

	bool getAirFilter() {
		return true;
	}

	bool getOilFilter() {
		return true;
	}

	TireBatch getTires(std::string make, int size, int quantity) {
		TireBatch to_return{ make,size,quantity };
		return to_return;
	}
	
};

