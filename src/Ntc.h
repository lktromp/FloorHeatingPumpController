#ifndef NTC_H
#define NTC_H
#include "mbed.h"
#include <hal_types.h>

//----------------------------------------------------------------------------------
// Class declaration
//----------------------------------------------------------------------------------
class Ntc{
    public:
        Ntc(uint32 Ntc25Kval);
        int32 BridgeToTemp (uint32 code);
        //halSpi();
        //void halSpiInit (void);
        //uint8 halSpiRead  (uint8 addr, uint8* data, uint16 length);
        //uint8 halSpiWrite (uint8 addr, const uint8* data, uint16 length);
        //uint8 halSpiStrobe(uint8 cmd);
        //void halSpiInit(uint8 databits, uint8 polarity, uint8 clockrate);
        //void halSpiCsDeassert (void);
        //void halSpiCsAssert   (void);
        //uint8 halSpiMisoValue  (void);
    private:
        //void  halSpiStart      (void);
        //SPI cl_spiport;
        //DigitalOut cl_cs_pin;
        //PinName cl_miso_pin;
        uint32_t Ntc25KValue;
    };
#endif //NTC_H