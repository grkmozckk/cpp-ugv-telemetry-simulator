#include "../include/DistanceSensor.h"

DistanceSensor::DistanceSensor(double initialDistance)
{
    if (initialDistance < 0.0)
    {
        distance = 0.0;
    }
    else
    {
        distance = initialDistance;
    }
}

double DistanceSensor::getDistance() const
{
    return distance;
}

void DistanceSensor::setDistance(double newDistance)
{
    if (newDistance < 0.0)
    {
        distance = 0.0;
    }
    else
    {
        distance = newDistance;
    }
}