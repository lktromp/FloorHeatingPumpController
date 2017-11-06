#ifndef DATALOGGER_H
#define DATALOGGER_H
#include "mbed.h"
//#include "FsWrapper.h"
#include <hal_types.h>

#define NUMBER 256
//----------------------------------------------------------------------------------
// Class declaration
//----------------------------------------------------------------------------------
class DataLogger{
    public:
        DataLogger (void);
        void AddValue (uint32_t value);
        void FlushLogger (void);
        void StartLogger(void);
        void StopLogger(void);

    private:

        void CheckFileExists();
        uint32_t buffer[NUMBER];
        uint32_t index;
    };
#endif //DATALOGGER_H