#include<iostream>
#include"Receptionist.h"

int main() {
	Technician* technician = new Technician();
	Receptionist* receptionist = new Receptionist(technician);
	std::string serviceRecord = "initial Service Record";
	std::vector<bool> tireStatuses = { false,false,false,false };
	Car* car = new Car(false,false,false, tireStatuses);
	receptionist->giveInfo(car, serviceRecord);
	std::cout << serviceRecord << std::endl;
	
	receptionist->payment(500);

	system("PAUSE");
	return 0;
}