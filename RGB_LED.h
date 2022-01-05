/*
    RGB_RED.h

    created 6 Jan 2022
    By MR-XieXuan

    The code is public domain :

    https://github.com/MR-XieXuan/RGB-LED-for-Arduino

*/

#ifndef _RGB_LED_H_
#define _RGB_LED_H_

/*
    You should define this RGB_LED before you use it in the outside
    Like :
        RGB_LED RED1;
*/

class RGB_LED{
    public:
        /*
        *   This function should be called before any function is used to activate other function
        *   Like :
        *       Init_RGB(Red_pin,Green_pin,Blud_pin);    
        */
        void Init_RGB(uint8_t red,uint8_t green,uint8_t blue);  //Config the RGB_LED pings
        void Color_RGB(uint8_t red,uint8_t green,uint8_t blue); //Cause the LED to glow this RGB Color
    protected:
        uint8_t R;
        uint8_t G;
        uint8_t B;
};






#endif