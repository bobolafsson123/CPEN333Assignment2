#pragma once
#include <iostream>
#include <string>
class JobSheet
{
private:
	std::string jobSheet;

public:
	std::string getJobSheet() {
		return jobSheet;
	}
	void addItem(int partNumber, int quantity, int cost) {
		jobSheet = jobSheet
			+ "partNumber: " + std::to_string(partNumber)
			+ "quantity: " + std::to_string(quantity)
			+ "cost: " + std::to_string(cost)
			+ "\n";
	}
	
	void addLabourItem(std::string service, int cost) {
		jobSheet = jobSheet
			+ service+ " with cost:" +  std::to_string(cost) + "\n";

	}
};

