/*
* #pragma once

class BatterySensor
{
    private:
        double batteryLevel;

    public:
        BatterySensor(double initialBatteryLevel);

        double getBatteryLevel() const;
};

*/

#pragma once

class BatterySensor
{
private:
    double batteryLevel;

public:
    BatterySensor(double initialBatteryLevel);

    double getBatteryLevel() const;
    void setBatteryLevel(double newBatteryLevel);
};
