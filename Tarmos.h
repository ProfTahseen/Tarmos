/*
  Tarmos.h - Tarmos modül geliştirme kütüphanesi
  Tahsin Alpaydın tarafrından oluşturuldu, 14 Aralık, 2022.
  Utku Derman tarafından geliştirildi, 18 Şubat, 2023.
  Herkese açık olarak yayınlanmıştır.
*/

#ifndef Tarmos_h
#define Tarmos_h

#include "Arduino.h"

class Tarmos
{
  public:
    Tarmos(String moduleName, void (*customFunc)());
    void update();
    void begin();
  private:
    String _moduleName;
    void (*_customFunc)();
    String _incomingString;
};

#endif

