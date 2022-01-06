
/*
    RGB_LED

    Demonstrates the use of the RGB_LED library in the same way then original RGB_LED.h

    Hardware required :
        *LED connected to pings in ESP-8266 red -> D1,green -> D2,blud -> D3

    created 6 Jan 2022
    By MR-XieXuan

    The code is public domain :

    https://github.com/MR-XieXuan/RGB-LED-for-Arduino



*/



#include <RGB_LED.h>

#define RGB_R D1
#define RGB_G D2
#define RGB_B D3

RGB_LED RGB;

void setup(){
    RGB.Init_RGB(RGB_R,RGB_G,RGB_B);
}

void loop(){
    RGB.Color_RGB(255,0,0);
    while(1);
}




