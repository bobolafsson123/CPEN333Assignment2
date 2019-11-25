#pragma once
#include <iostream>
#include<vector>
#include "Car.h"
#include "Technician.h"
#include "JobSheet.h"
#include <string>
class Receptionist
{
private:
	Car* car;
	Technician* technician;

	void write(std::string message) {
		std::cout << "receptionist: " << message << std::endl;
	}
public:
	Receptionist(Technician* technician) {
		this->technician = technician;
	}
	//modifies:this, car, serviceRecord
	//effect: update car receptionist is servicing

	std::string giveInfo(Car* car, std::string& serviceRecord) {
		this->car = new Car();
		write("just got car and service Record");
		JobSheet updatedJobSheet = technician->service(car);
		makeCoffee();
		std::string invoice = generateInvoice();
		stampServiceRecord(serviceRecord);
		return invoice;
	}

	//requires: car and technician is not null

	void makeCoffee() {
		write("making coffee");
	}

	std::string generateInvoice() {
		return std::string("500 dollars is your spending");
	}

	void stampServiceRecord(std::string& servicerRecord) {
		write("stamped service record");
		servicerRecord = servicerRecord + std::string("STAMPED");
	}

	void payment(int amount) {
		write("received payment" + std::to_string(amount) + " you may now take your car home");

	}


};

