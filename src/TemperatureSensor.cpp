#include "../include/TemperatureSensor.h"

TemperatureSensor::TemperatureSensor(double initialTemperature)
    : temperature(initialTemperature)
{}

double TemperatureSensor::getTemperature() const
{
    return temperature;
}

void TemperatureSensor::setTemperature(double newTemperature)
{
    temperature = newTemperature;
}