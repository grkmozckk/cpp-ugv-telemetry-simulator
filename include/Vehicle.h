#pragma once

#include "BatterySensor.h"
#include "DistanceSensor.h"
#include "TemperatureSensor.h"
#include "TelemetryData.h"

class Vehicle
{
private:
    BatterySensor batterySensor;
    DistanceSensor distanceSensor;
    TemperatureSensor temperatureSensor;

public:
    //BatterySensor, DistanceSensor ve TemperatureSensor sınıflarının kendi constructor'ları var. Dolayısıyla Vehicle constructor'ında bu üç nesneyi doğru şekilde başlatmamız gerekecek
    Vehicle(
        double initialBatteryLevel,
        double initialDistance,
        double initialTemperature
    );

     void updateSensors(  // Sensörleri zamanla güncellemek içim
        double batteryLevel,
        double distance,
        double temperature
    );

    TelemetryData collectTelemetry() const;

   
};