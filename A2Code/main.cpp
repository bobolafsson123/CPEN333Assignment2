#include<iostream>
#include"Receptionist.h"

void write(std::string message) {
	std::cout << "Customer: " << message << std::endl;
}
int main() {
	Technician* technician = new Technician();
	Receptionist* receptionist = new Receptionist(technician);
	std::string serviceRecord = "initial Service Record";
	std::vector<bool> tireStatuses = { false,false,false,false };
	Car car;
	std::string invoice = receptionist->giveInfo(car, serviceRecord);
	write("my updated service record says:" + serviceRecord);
	write("my invoice says: ");
	write(invoice);
	receptionist->payment();
	write("now I can take my car home and be happy!");
	system("PAUSE");
	return 0;
}