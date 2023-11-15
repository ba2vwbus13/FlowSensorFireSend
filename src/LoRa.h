//
//  920MHz LoRa/FSK RF module ES920LR3 
//  for M5Stack
//

#ifndef LoRa_h
#define LoRa_h

int LoRaInit(int i);
void LoRaConfigMode();
int LoRaCommand(String s);

#endif
