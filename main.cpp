#include "temperatura.h"
#include "mbed.h"
#include <iostream>
#include <cmath>



int main() {
    while (1) {

        float t = calcularTemperatura();
        printf("Temperatura: %.2f ºC\n", t);

        ThisThread::sleep_for(1s);
    }
}