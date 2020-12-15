# Arduino_PWM_Generator
Arduino PWM generator sketch, using register, tested on Arduino Nano
Details :
  - Minimal recommended frequency 300Hz
  - Max frequency recommended 1.5Mhz
  - Min working frequency (but unusable) ~244Hz
  - Max working frequency (but unusable) ~5.3Mhz
  

Will not work under 244Hz for my board, it's expected
After 1.5Mhz (Arbitrary) the frequency and duty cycle is not accurate anymore


![DS1Z_QuickPrint_10kHZ.png](https://github.com/MoEmanon/Arduino_PWM_Generator/blob/master/screenshots/DS1Z_QuickPrint_10kHZ.png)
