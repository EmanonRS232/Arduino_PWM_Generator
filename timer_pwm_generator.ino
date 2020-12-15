bool pwm_init_state = 0;
long frequency = 1E3; // Add desired frequency in kHz
int duty_cycle = 50; // Add desired duty cycle in pourcentage
  
void setup() {
  pinMode(9, OUTPUT); // Choose PWM pin, must be compatible
  Serial.begin(115200); 
}

void loop() {
  if(!pwm_init_state)
    pwm_init(frequency, duty_cycle);
  Serial.println(ICR1);
  delay(1000);
}

bool pwm_init(long frequency,int duty_cycle) {
  TCCR1A = B00000000;
  TCCR1B = B00000000;
  TCCR1A |= (1<<WGM11) | (1<<COM1A1) | (1<<COM1B1); // Mode 14 WGM13-->11 and COM1A1 & COM1B1 | Non inverted
  TCCR1B |= (1<<CS10) | (1<<WGM12) | (1<<WGM13); // Precaler 1
  ICR1=16E6/(1*frequency); // = 16E6/(Prescaler * Frequence) | Here 10Hz
  OCR1A=ICR1*(duty_cycle * 0.01); //  = ICR1 * (Duty * 0.01) | Here 50%
  return true;
}
