/*
    RGB_RED.h

    created 6 Jan 2022
    By MR-XieXuan

    The code is public domain :

    https://github.com/MR-XieXuan/RGB-LED-for-Arduino

*/
#include "RGB_LED.h"

void RGB_LED :: Color_RGB(uint8_t red,uint8_t green,uint8_t blue){
    analogWrite(R,255-red);
    analogWrite(G,255-green);
    analogWrite(B,255-blue);
}

void RGB_LED :: Init_RGB(uint8_t red,uint8_t green,uint8_t blue){
    R = red;
    G = green;
    B = blue;
    digitalWrite(R,OUTPUT);
    digitalWrite(G,OUTPUT);
    digitalWrite(B,OUTPUT);    
}

