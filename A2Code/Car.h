#pragma once
#include <vector>
class Car
{
private:
// status is one of True, False. True means not need changing, and False means needs changing
	bool oilStatus;
	bool oilFilterStatus;
	bool airFilterStatus;
	std::vector<bool> tireStatuses;


public:

	Car(bool oilStatus,
	bool oilFilterStatus,
	bool airFilterStatus,
	std::vector<bool> tireStatuses) {
		this->oilFilterStatus = oilStatus;
		this->oilFilterStatus = oilFilterStatus;
		this->airFilterStatus = airFilterStatus;
		this->tireStatuses = tireStatuses;
	}
	void swapOil() {
		this->oilStatus = true;
	}
	void swapOilFilter() {
		this->oilFilterStatus = true;
	}

	void swapAirFilter() {
		this->airFilterStatus = true;
	}

	bool checkTiresForWear() {
		for (int i = 0; i < tireStatuses.size(); i++) {
			if (tireStatuses[i] == false) {
				return true;
			}
		}
		return false;
	}

	void swapTiresNewTires() {
		for (int i = 0; i < tireStatuses.size(); i++) {
			tireStatuses[i] = true;
		}
	}

//effect: none so far
	void rotateTires() {
		
	}


};

