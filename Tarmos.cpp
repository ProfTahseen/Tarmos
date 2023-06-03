/*
  Tarmos.h - Tarmos modül geliştirme kütüphanesi
  Tahsin Alpaydın tarafrından oluşturuldu, 14 Aralık, 2022.
  Utku Derman tarafından geliştirildi, 18 Şubat, 2023.
  Herkese açık olarak yayınlanmıştır.
*/

#include "Arduino.h"
#include "Tarmos.h"

Tarmos::Tarmos(String moduleName, void (*customFunc)())
{
  _moduleName = moduleName;
  _customFunc = customFunc;
  String _incomingString = "";
}

void Tarmos::begin()
{
    Serial.begin(115200);
    Serial.setTimeout(50);
}

void Tarmos::update()
{
      if (Serial.available() > 0){
        _incomingString = Serial.readString();
          
        if (_incomingString == "moduleName") {
            Serial.print(_moduleName);

        } else if (_incomingString == "data") {

            (*_customFunc)();

        }

    }
}

