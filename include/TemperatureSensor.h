#pragma once

class TemperatureSensor
{
private:
	double temperature;

public:
	TemperatureSensor(double initialTemperature);

	double getTemperature() const;
	void setTemperature(double newTemperature);

};