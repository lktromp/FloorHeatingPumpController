#include "Ntc.h"
#include "mbed.h"
#include "main.h"
#include "hal_types.h"

//#define DEBUG
//----------------------------------------------------------------------------------
// Public functions
//----------------------------------------------------------------------------------
        
//----------------------------------------------------------------------------------
//  Constructor
//
//  DESCRIPTION:
//    
//    
//----------------------------------------------------------------------------------     
//Constructor
Ntc::Ntc(uint32 Ntc25Kval) {
    Ntc25KValue = Ntc25Kval;     
}


int32 Ntc::BridgeToTemp (uint32 AdcCnts){

    //halSpiCsAssert();
    //cl_spiport.format(8,0);
    //cl_spiport.frequency(10000);
    //pc.printf("HalSpi initialized\r\n");
    //halSpiCsDeassert();
    return (int32 )AdcCnts;
}

//----------------------------------------------------------------------------------
//  void halSpiWrite(uint8 addr, const uint8 *buffer, uint16 length)
//
//  DESCRIPTION:
//    Write data to device, starting at internal device address "addr".
//    The device will increment the address internally for every new byte
//    that is written. For single byte write, set length to 1.
//----------------------------------------------------------------------------------
//uint8 halSpi::halSpiWrite(uint8 addr, const uint8* data, uint16 length)
//{
