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

