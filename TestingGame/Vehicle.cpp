#include "Vehicle.h"

void Vehicle::move(int x, int y)
{
	x_ = x;
	y_ = y;
}

int Vehicle::getX() const
{
	int x = 0;
	return x_;
}

int Vehicle::getY() const
{
	int y = 0;
	return y_;
}
