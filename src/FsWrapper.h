#ifndef FSWRAPPER_H
#define FSWRAPPER_H
#include "mbed.h"
#include <hal_types.h>
DigitalIn enable(p5);

//----------------------------------------------------------------------------------
// Class declaration
//----------------------------------------------------------------------------------
class FsWrapper{
    public:
        //enable = 
        void OpenFile (void);
        void CloseFile (void);
        void WriteFile (void);
        void ReadFile (void);
    private:
        //LocalFileSystem local("local");// Create the local filesystem under the name "local"
        FILE *fp;
};
#endif //FSWRAPPER_H 
