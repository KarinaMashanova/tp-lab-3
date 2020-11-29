#include "Circle.h"
#include "task1.h"

double calcDelta()
{
	Circle Earth(6378.1);
	Circle Earth_rope(0);
	Earth_rope.setFerence(Earth.getFerence() + 1);
	return (Earth_rope.getRadius() - Earth.getRadius());
}

double calcCost()
{
	Circle Pool(3);
	Circle Pool_track(Pool.getRadius() + 1);
	return Pool_track.getFerence() * 2000 + ((Pool_track.getArea() - Pool.getArea()) * 1000);
}