#include "mbed.h"

DigitalOut led(LED0);

int main() {
    led = 1;

    while (true) {
        Thread::wait(1000); // stuck if started with a 5.8 bootloader, same thing with wait_ms()
        led = !led;
    }
}
