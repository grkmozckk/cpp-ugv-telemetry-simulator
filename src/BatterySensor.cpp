/*
Bu kısımda atama (assignment) ile constructor'u oluştururuz.
Burada önce batterylevel oluşturulur sonra initialBatteryLevel değeri atanır

#include "../include/BatterySensor.h"

BatterySensor::BatterySensor(double initialBatteryLevel)
{
    batteryLevel = initialBatteryLevel;
}

double BatterySensor::getBatteryLevel() const
{
    return batteryLevel;
}

*/


/*
* 
#include "../include/BatterySensor.h"

// Burada ise batteryLevel oluşturulurken doğrudan initalBatteryLevel ile başlatılır yani (oluştururken değeri ver)
//BatterySensor, geçersiz batarya değerlerini 0 - 100 aralığına sınırlar. Bu sayede nesne hiçbir zaman geçersiz bir batteryLevel değeri taşımaz.

BatterySensor::BatterySensor(double initialBatteryLevel)
{
    if (initialBatteryLevel < 0.0)
    {
        batteryLevel = 0.0;
    }
    else if (initialBatteryLevel > 100.0)
    {
        batteryLevel = 100.0;
    }
    else
    {
        batteryLevel = initialBatteryLevel;
    }
}

double BatterySensor::getBatteryLevel() const
{
    return batteryLevel;
}


*/

#include "../include/BatterySensor.h"

BatterySensor::BatterySensor(double initialBatteryLevel)
{
    if (initialBatteryLevel < 0.0)
    {
        batteryLevel = 0.0;
    }
    else if (initialBatteryLevel > 100.0)
    {
        batteryLevel = 100.0;
    }
    else
    {
        batteryLevel = initialBatteryLevel;
    }
}

double BatterySensor::getBatteryLevel() const
{
    return batteryLevel;
}

void BatterySensor::setBatteryLevel(double newBatteryLevel)
{
    if (newBatteryLevel < 0.0)
    {
        batteryLevel = 0.0;
    }
    else if (newBatteryLevel > 100.0)
    {
        batteryLevel = 100.0;
    }
    else
    {
        batteryLevel = newBatteryLevel;
    }
}