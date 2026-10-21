#include "../include/Vehicle.h"

Vehicle::Vehicle(
    double initialBatteryLevel,
    double initialDistance,
    double initialTemperature
)
    : batterySensor(initialBatteryLevel),
    distanceSensor(initialDistance),
    temperatureSensor(initialTemperature)
{}

void Vehicle::updateSensors(
    double batteryLevel,
    double distance,
    double temperature
)
{
    batterySensor.setBatteryLevel(batteryLevel);
    distanceSensor.setDistance(distance);
    temperatureSensor.setTemperature(temperature);
}

TelemetryData Vehicle::collectTelemetry() const
{
    TelemetryData telemetry;

    telemetry.batteryLevel = batterySensor.getBatteryLevel();
    telemetry.distance = distanceSensor.getDistance();
    telemetry.temperature = temperatureSensor.getTemperature();

    return telemetry;
}