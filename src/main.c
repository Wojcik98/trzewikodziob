#include "main.h"
#include "encoders.h"
#include "motors.h"
#include "sensors.h"
#include "ui.h"

int main(void) {
    SystemInit();
    setClockInterrupt();

    encodersConfig();
    motorsConfig();
    sensorsConfig();
    uiConfig();

    LED_1_OFF;
    LED_2_OFF;
    LED_3_OFF;

    while (1) {
    }
}

void setClockInterrupt() {
    // Set interrupt every 1ms
    if (SysTick_Config(SystemCoreClock / 1000)) {
        while (1);
    }
}
