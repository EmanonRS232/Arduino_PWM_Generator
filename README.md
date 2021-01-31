# Arduino_PWM_Generator
Arduino simple PWM generator sketch, no lib using only register, tested on Arduino Nano


How to use :

    - Edit line 2 and 3 of timer_pwm_generator.ino with the desired frequency and duty cycle
    - Edit line 4 ; pin number for your specific flavour of arduino ( nano, uno, mega etc ...)
    - Upload the compiled sketch using arduino ide



Details :
  - Minimal recommended frequency 300Hz
  - Maximal recommended frequency 1.5Mhz
  - Minimal working frequency (but unusable) ~244Hz
  - Maximal working frequency (but unusable) ~5.3Mhz
  

Will not work under 244Hz for my board, it's expected,
after 1.5Mhz (Arbitrary) the frequency and duty cycle is not accurate anymore.

This sketch has been tested only on an arduino nano
I use the timer 1 register output A, so this sketch is may not be compatible with the servo library depending on the arduino

Timer 1 pin : 

Arduino flavour | Timer 1 pin
------------ | -------------
Arduino Nano | Pin 9
Arduino Uno | Pin 9
Arduino Mega | Pin 11


![DS1Z_QuickPrint_10kHZ.png](https://github.com/MoEmanon/Arduino_PWM_Generator/blob/master/screenshots/DS1Z_QuickPrint_10kHZ.png)
