# Arduino_PWM_Generator
Arduino simple PWM generator sketch, no lib using only register, tested on Arduino Nano

Details :
  - Minimal recommended frequency 300Hz
  - Maximal recommended frequency 1.5Mhz
  - Minimal working frequency (but unusable) ~244Hz
  - Maximal working frequency (but unusable) ~5.3Mhz
  

Will not work under 244Hz for my board, it's expected,
after 1.5Mhz (Arbitrary) the frequency and duty cycle is not accurate anymore


![DS1Z_QuickPrint_10kHZ.png](https://github.com/MoEmanon/Arduino_PWM_Generator/blob/master/screenshots/DS1Z_QuickPrint_10kHZ.png)
