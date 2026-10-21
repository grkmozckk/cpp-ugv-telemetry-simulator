#pragma once

class DistanceSensor
{
private:
	double distance;

public:
	DistanceSensor(double initialDistance);

	double getDistance() const;
	void setDistance(double newDistance);

};