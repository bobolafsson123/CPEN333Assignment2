#pragma once
#include <vector>
#include"Oil.h"
#include "TireBatch.h"
class Car
{
private:
	// status is one of True, False. True means not need changing, and False means needs changing
	Oil oil;
	bool oilFilter;
	bool airFilter;
	std::vector<bool> isTireGood;



public:

	Car() :oil({ "type 95",500 }), oilFilter(false), airFilter(false), isTireGood({ false,false,false,false }) {
	}

	//requires: None
	//Modifies this
	//car's oil becomes new oil
	Oil getOil() {
		return oil;
	}

	bool getOilFilter() {
		return oilFilter;
	}
	bool getAirFilter() {
		return airFilter;
	}

	//modifies: this
	//effect: updates oil with newOil and returns oldOil
	Oil swapOil(Oil newOil) {
		Oil oldOil = oil;
		oil = newOil;
		return oldOil;
	}

//modifies: this
//effect: updates Oil Filter with newOilFilter and returns oldOilFilter
	bool swapOilFilter(bool newOilFilter) {
		bool oldOilFilter = oilFilter;
		oilFilter = newOilFilter;
		return oldOilFilter;
	}

//modifies: this
//effect: updates airFIlter with newAirFilter and returns oldAirFilter
	bool swapAirFilter(bool newAirFilter) {
		bool oldAirFilter = airFilter;
		airFilter = newAirFilter;
		return oldAirFilter;
	}

	//effect: return isTireGood vector
	std::vector<bool> checkTiresForWear() {
		return isTireGood;
	}

	//modifies: this
	//effect: swap as many car tires as available tires in newTireBatch. Returns newTireBatch as 
	//we assume old tires have same make, size, and quantity
	TireBatch swapTires(TireBatch newTireBatch) {
		int numNewTires = newTireBatch.quantity;
		for (int i = 0; i < isTireGood.size(); i++) {
			if (isTireGood[i] == false) {
				isTireGood[i] = true;
				numNewTires--;
			}
			if (numNewTires == 0) {
				break;
			}
			
		}
		return newTireBatch;
	}

//effect: rotate the tires (nothing actually happens in this implementation)
	void rotateTires() {
		
	}


};

