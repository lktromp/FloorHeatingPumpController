#include "mbed.h"
#include "main.h"
#include "hal_types.h"
#include "DataLogger.h"

DataLogger::DataLogger (void) {
//Constructor
}

void DataLogger::AddValue (uint32_t value) {
//Add value to logger buffer
    if (index < (NUMBER - 1)) {
        //buffer not full yet
        buffer[index++] = value;
    } else
    {
        //buffer full
    }    
}

void DataLogger::FlushLogger (void) {
//Constructor
}

void DataLogger::StartLogger(void) {
//Constructor
}

void DataLogger::StopLogger(void) {
//Constructor
}