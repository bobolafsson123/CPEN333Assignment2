#pragma once
#include <vector>
#include"Oil.h"
class Car
{
private:
	// status is one of True, False. True means not need changing, and False means needs changing
	Oil oil;
	bool oilFilter;
	bool airFilter;
	std::vector<bool> tires;



public:

	Car() :oil({ "type 95",500 }), oilFilter(false), airFilter(false), tires({ false,false,false,false }) {
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
	bool swapOilFilter(bool newOilFilter) {
		bool oldOilFilter = oilFilter;
		oilFilter = newOilFilter;
		return oldOilFilter;
	}

	void swapAirFilter() {
		
	}

	bool checkTiresForWear() {
		for (int i = 0; i < tires.size(); i++) {
			if (tires[i] == false) {
				return true;
			}
		}
		return false;
	}

	void swapTiresNewTires() {
		for (int i = 0; i < tires.size(); i++) {
			tires[i] = true;
		}
	}

//effect: none so far
	void rotateTires() {
		
	}


};

