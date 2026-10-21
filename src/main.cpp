#include <iostream>
#include "../include/TelemetryData.h"
#include "../include/BatterySensor.h"
#include "../include/DistanceSensor.h"
#include "../include/TemperatureSensor.h"
#include "../include/Vehicle.h"
#include <vector>

using namespace std;
//
//int main()
//{
//    cout << "UGV Telemetry Simulator" << endl;
//
//    // TELEMETRY DATA
//
//    TelemetryData telemetry;
//
//    telemetry.batteryLevel = 87.5;
//    telemetry.distance = 154.2;
//    telemetry.temperature = 31.4;
//
//    cout << "Battery: " << telemetry.batteryLevel << " %" << endl;
//    cout << "Distance: " << telemetry.distance << " cm" << endl;
//    cout << "Temperature: " << telemetry.temperature << " C" << endl;
//
//
//    // BATTERY
//    
//    // batterySensor.batteryLevel ile ulaşamam çünkü batteryLevel private. onun için batterySensor.getBatteryLevel() ile ulaşıyorum.
//    BatterySensor batterySensor(87.5);
//    cout << "BatterySensor Value: " << batterySensor.getBatteryLevel() << " %" << endl;
//
//    //BatterySensor sensor1(-20.0);
//    //BatterySensor sensor2(50.0);
//    //BatterySensor sensor3(150.0);
//
//   /* cout << sensor1.getBatteryLevel() << endl;
//    cout << sensor2.getBatteryLevel() << endl;
//    cout << sensor3.getBatteryLevel() << endl;*/
//
//
//    cout << batterySensor.getBatteryLevel() << endl;
//
//    batterySensor.setBatteryLevel(75.0);
//
//    cout << batterySensor.getBatteryLevel() << endl;
//
//    batterySensor.setBatteryLevel(150.0);
//
//    cout << batterySensor.getBatteryLevel() << endl;
//
//
//    // DISTANCE
//
//    DistanceSensor distanceSensor(154.2);
//
//    cout << "DistanceSensor value: "
//        << distanceSensor.getDistance()
//        << " cm" << endl;
//    return 0;
//
// 
//    // TEMPERATURE
//
//    TemperatureSensor temperatureSensor(31.4);
//
//    cout << "TemperatureSensor value: " << temperatureSensor.getTemperature() << " C" << endl;
//
//    temperatureSensor.setTemperature(-5.0); 
//    cout << "TemperatureSensor value: " << temperatureSensor.getTemperature() << " C" << endl;
//
//    //VEHICLE
//
//
//}



//// Yeni Yapı
//int main()
//{
//    cout << "UGV Telemetry Simulator" << endl;
//
//    Vehicle vehicle(87.5, 154.2, 31.4);
//
//    TelemetryData telemetry = vehicle.collectTelemetry();
//
//    cout << "Battery: " << telemetry.batteryLevel << " %" << endl;
//    cout << "Distance: " << telemetry.distance << " cm" << endl;
//    cout << "Temperature: " << telemetry.temperature << " C" << endl;
//
//    return 0;
//}





int main()
{
    cout << "UGV Telemetry Simulator" << endl;
    cout << "-----------------------" << endl;

    double battery = 87.5;
    double distance = 154.2;
    double temperature = 31.4;

    Vehicle vehicle(
        battery,
        distance,
        temperature
    );

    vector<TelemetryData> telemetryHistory;

    for (int step = 1; step <= 5; step++)
    {
        vehicle.updateSensors(
            battery,
            distance,
            temperature
        );

        TelemetryData telemetry = vehicle.collectTelemetry();

        telemetryHistory.push_back(telemetry);

        cout << "Step: " << step << endl;
        cout << "Battery: " << telemetry.batteryLevel << " %" << endl;
        cout << "Distance: " << telemetry.distance << " cm" << endl;
        cout << "Temperature: " << telemetry.temperature << " C" << endl;
        cout << "-----------------------" << endl;

        battery -= 1.5;
        distance -= 10.0;
        temperature += 0.5;
        cout << endl;
        cout << "Total telemetry records: "
            << telemetryHistory.size()
            << endl;

        cout << endl;
        cout << "Telemetry History" << endl;
        cout << "-----------------------" << endl;

        for (size_t i = 0; i < telemetryHistory.size(); i++)
        {
            cout << "Record: " << i + 1 << endl;

            cout << "Battery: "
                << telemetryHistory[i].batteryLevel
                << " %" << endl;

            cout << "Distance: "
                << telemetryHistory[i].distance
                << " cm" << endl;

            cout << "Temperature: "
                << telemetryHistory[i].temperature
                << " C" << endl;

            cout << "-----------------------" << endl;
        }

    }

    return 0;
}