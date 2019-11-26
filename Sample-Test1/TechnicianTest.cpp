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

