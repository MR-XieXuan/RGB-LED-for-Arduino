# RGB-LED-for-Arduino

---

## 开始使用  

此库是针对 Arduino 而开发的。  
这个库用以Arduino设备对RGB_LED灯进行控制。
使用时可自行阅读RGB_LED.h文件,里面注释写的很详细。  

你也可阅读以下手册：  

***

## 手册  
* You should define this RGB_LED before you use it in the outside  
    Like :  
        `RGB_LED RED1;`  

* This function should be called before any function is used to activate other function  
    Like :  
        `Init_RGB(Red_pin,Green_pin,Blud_pin); //Config the RGB_LED pings`  

* Cause the LED to glow this RGB Color  
    Prototype :  
        `void Color_RGB(uint8_t red,uint8_t green,uint8_t blue); //Cause the LED to glow this RGB Color`  
