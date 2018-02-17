#include "mbed_config.h"
#include "mbed.h"
//using namespace mbed;

DigitalOut myled(PB_1);
Serial serial(PA_2, PA_3, 115200);

int main() {
    while(1) {
        myled = 1; // LED is ON
        wait(0.5); // 200 ms
        myled = 0; // LED is OFF
        wait(0.5); // 1 sec
    }
}
