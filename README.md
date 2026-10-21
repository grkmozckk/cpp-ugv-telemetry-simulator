# cpp-ugv-telemetry-simulator

Modern C++ temellerini gerçek bir proje üzerinde uygulamak amacıyla geliştirilmiş basit bir **UGV telemetri simülatörüdür**.

Bu proje, savunma sanayii odaklı yazılım geliştirme yol haritamdaki **FAZ 1 — Modern C++** aşamasının uygulama projesidir.

## Projenin Amacı

Projede bir insansız kara aracının (UGV - Unmanned Ground Vehicle) temel telemetri verileri simüle edilmektedir.

Simüle edilen veriler:

- Batarya seviyesi (Battery Level)
- Mesafe (Distance)
- Sıcaklık (Temperature)

Sensör verileri `Vehicle` sınıfı üzerinden toplanır ve `TelemetryData` yapısında birleştirilir.

## Mimari

```text
BatterySensor
DistanceSensor
TemperatureSensor
        |
        v
      Vehicle
        |
        v
 collectTelemetry()
        |
        v
  TelemetryData
        |
        v
std::vector<TelemetryData>
        |
        v
 Telemetry History