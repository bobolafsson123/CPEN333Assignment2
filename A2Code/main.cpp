#include<iostream>
#include"Receptionist.h"

int main() {
	Technician* technician = new Technician();
	Receptionist* receptionist = new Receptionist(technician);
	std::string serviceRecord = "initial Service Record";
	Car* car = new Car();
	receptionist->giveInfo(car, serviceRecord);
	std::cout << serviceRecord << std::endl;
	
	receptionist->payment(500);

	system("PAUSE");
	return 0;
}