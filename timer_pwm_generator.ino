bool pwm_init_state = false;
long frequency = 10E3; // Add desired frequency in kHz, 10kHz here
int duty_cycle = 50; // Add desired duty cycle in percentage, 50%
int pin_number = 9; // Change your pin number accordingly, check the README.md
  
void setup() {
  pinMode(pin_number, OUTPUT); // Choose PWM pin, must be compatible
  Serial.begin(115200); 
}

void loop() {
  if(!pwm_init_state)
    pwm_init_state = pwm_init(frequency, duty_cycle);
    
  printFD();
  delay(3000);
}

bool pwm_init(long frequency,int duty_cycle) {
  TCCR1A = B00000000;
  TCCR1B = B00000000;
  
  TCCR1A |= (1<<WGM11) | (1<<COM1A1) | (1<<COM1B1); // Mode 14 WGM13-->11 and COM1A1 & COM1B1 | Non inverted
  TCCR1B |= (1<<CS10) | (1<<WGM12) | (1<<WGM13); // Precaler 1
  
  ICR1=16E6/(1*frequency); // = 16E6/(Prescaler * Frequency)
  OCR1A=ICR1*(duty_cycle * 0.01); //  = ICR1 * (Duty * 0.01)
  return true;
}

void printFD() {
  Serial.print("Frequency : ");
  if (frequency < 1000) {
    Serial.print(frequency);
    Serial.print(" Hz");
    Serial.print("\n");
  }
  else {
    Serial.print(frequency / 1000);
    Serial.print(" kHz");
    Serial.print("\n");
  }

  Serial.print("Duty Cycle : ");
  Serial.print(duty_cycle);
  Serial.print(" %");
  Serial.print("\n");
}
