#include "mbed.h"

//Analog inputs
AnalogIn CentralIn(p15);
AnalogIn CentralRetour(p16);
AnalogIn FloorIn(p17);
AnalogIn FloorRetourIn(p18);

//Leds
DigitalOut HbLed(LED1);
DigitalOut PumpLede(LED2);

//Digital outputs
DigitalOut PumpOut(p21);

//Others
Serial pc(USBTX, USBRX); // tx, rx
 
//functions
uint32_t init (void);
uint32_t printf (char msg[]);

int main() {
    printf("### Floor Heating Pump Controller Main Application Started ###");
    
    if (init ()) {
        printf("### FHPC Init failed ###");
    }
    
    printf("### FHPC Starting Threads ###");
        
    
    //main loop
    while(1) {
        printf("### FHPC Endless loop started, threads should be running ###");
        HbLed = 1;
        wait(0.2);
        HbLed = 0;
        wait(0.2);
    }
}

uint32_t init (void) {
    return 0;
}

//uint32_t SerialPrintf (string msg) {
 //   pc.printf(msg);    
 //   return 0;
//}
