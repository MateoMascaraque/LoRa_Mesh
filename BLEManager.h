#pragma once
#include <NimBLEDevice.h>

// callbacks
class CharCallbacks : public NimBLECharacteristicCallbacks{

};
class ServerCallbacks : public NimBLEServerCallbacks{

};

// NimBLE manager
class NimBLEManager {
  public:
  
  void initBLE(); // structure, set callbacks, start server
  void advertise(); // initialise and begin advertising

  bool isWritten(); // has writing of the target characteristic taken place
  bool isConnected(); // is a device connected


  private:
  bool BLEWritten = false;
  bool BLEConnected = false;

  NimBLEServer* pServer;
  NimBLEService* pService;
  NimBLECharacteristic* pCharacteristic;

  void createStructure(); // creates server structure
};