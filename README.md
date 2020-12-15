# Arduino_PWM_Generator
Arduino PWM generator sketch, using register, tested on Arduino Nano

Min frequency recommended 300Hz
Max frequency recommended 1.5Mhz

Will not work under 244Hz for my board, it's expected
After 1.5Mhz (Arbitrary) the frequency and duty cycle is not accurate anymore


Min working frequency (but unusable) ~244Hz
Max working frequency (but unusable) ~5.3Mhz

TODO :
 
    - Add code comments and print usefull info

    - Add scope screenshots

    - Define frequency & duty cycle range

    - Add Atmel DataSheet
