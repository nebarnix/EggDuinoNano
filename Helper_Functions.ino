void initHardware(){
  pinMode(laserPin, OUTPUT);
  pinMode(PrgButton, INPUT);  
  analogWrite(laserPin,laserOFF);
  pinMode(enableRotMotor, OUTPUT); 
  pinMode(enablePenMotor, OUTPUT);  
  rotMotor.setMaxSpeed(2000.0);
  rotMotor.setAcceleration(stepperAccellVal);
  penMotor.setMaxSpeed(2000.0);
  penMotor.setAcceleration(stepperAccellVal);
  digitalWrite(enableRotMotor, HIGH) ;
  digitalWrite(enablePenMotor, HIGH) ;
  penServo.attach(servoPin);
  penServo.write(penUpPos);
  }
  
/*void inline sendAck(){
	Serial.print("OK\r\n");
}

void inline sendError(){
	Serial.print("unknown CMD\r\n");
}*/
