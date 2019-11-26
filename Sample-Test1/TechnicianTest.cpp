#include "pch.h"
#include "..\\A2Code\Technician.h"
#include"..\\\A2Code\Car.h"


TEST(Car, swapOil) {
	Car car;
	EXPECT_EQ(car.getOil().type,"type 95");
	EXPECT_EQ(car.getOil().quantity, 500);

	Oil oldOil = car.swapOil(Oil{ "type 96",300 });
	EXPECT_EQ(oldOil.quantity, 500);
	EXPECT_EQ(oldOil.type, "type 95");

	EXPECT_EQ(car.getOil().type, "type 96");
	EXPECT_EQ(car.getOil().quantity, 300);
}

TEST(Car, swapOilFilter) {
	Car car;
	EXPECT_FALSE(car.getOilFilter());
	bool oldOilFilter = car.swapOilFilter(true);
	EXPECT_FALSE(oldOilFilter);
	EXPECT_TRUE(car.getOilFilter());
}

TEST(Car, swapAirFilter) {
	Car car;
	EXPECT_FALSE(car.getAirFilter());
	bool oldAirFilter = car.swapAirFilter(true);
	EXPECT_FALSE(oldAirFilter);
	EXPECT_TRUE(car.getAirFilter());
}

TEST(Car, checkTiresForWear) {
	Car car;
	std::vector<bool> a = { false, false, false, false};
	EXPECT_EQ(car.checkTiresForWear(),a);
}

TEST(Car, swapTiresNewTires) {
	Car car; 
	std::vector <bool> isOldTireGood = car.checkTiresForWear();
	EXPECT_TRUE(std::find(isOldTireGood.begin(),isOldTireGood.end(), true) == isOldTireGood.end());
	TireBatch newTireBatch{ "costco",3,2 };
	car.swapTires(newTireBatch);
	std::vector <bool> isNewTireGood = car.checkTiresForWear();
	EXPECT_EQ(std::count(isNewTireGood.begin(), isNewTireGood.end(),true), 2);

	car.swapTires(newTireBatch);
	std::vector <bool> isNewNewTireGood = car.checkTiresForWear();
	EXPECT_EQ(std::count(isNewNewTireGood.begin(), isNewNewTireGood.end(), true), 4);
}


