#include <AFMotor.h>

AF_DCMotor motor1(1, MOTOR12_1KHZ); 
AF_DCMotor motor2(2, MOTOR12_1KHZ); 
AF_DCMotor motor3(3, MOTOR34_1KHZ);
AF_DCMotor motor4(4, MOTOR34_1KHZ);
AF_DCMotor motor5(5, MOTOR56_1KHZ);
AF_DCMotor motor6(6 ,MOTOR56_1KHZ)

char command; 

void setup() 
{       
  Serial.begin(9600); 
}

void loop(){
  if(Serial.available() > 0){ 
    command = Serial.read(); 
    Stop(); 
    switch(command){
    case 'F':  
      forward();
      break;
    case 'B':  
       back();
      break;
    case 'L':  
      left();
      break;
    case 'R':
      right();
      break;
    }
  } 
}

void forward()
{
  motor1.setSpeed(255); 
  motor1.run(FORWARD); 
  motor2.setSpeed(255); 
  motor2.run(FORWARD); 
  motor3.setSpeed(255);
  motor3.run(FORWARD); 
  motor4.setSpeed(255);
  motor4.run(FORWARD); 
  motor5.setSpeed(255);
  motor5.run(FORWARD);
  motor6.setSpeed(255);
  motor6.run(FORWARD);
}

void back()
{
  motor1.setSpeed(255); 
  motor1.run(BACKWARD); 
  motor2.setSpeed(255); 
  motor2.run(BACKWARD); 
  motor3.setSpeed(255); 
  motor3.run(BACKWARD); 
  motor4.setSpeed(255); 
  motor4.run(BACKWARD); 
  motor5.setSpeed(255);
  motor5.run(BACKWARD);
  motor6.setSpeed(255);
  motor6.run(BACKWARD);
}

void left()
{
  motor1.setSpeed(255); 
  motor1.run(BACKWARD); 
  motor2.setSpeed(255); 
  motor2.run(BACKWARD); 
  motor3.setSpeed(255); 
  motor3.run(FORWARD);  
  motor4.setSpeed(255); 
  motor4.run(FORWARD);  
  motor5.setSpeed(255);
  motor5.run(BACKWARD);
  motor6.setSpeed(255);
  motor6.run(FORWARD);
}

void right()
{
  motor1.setSpeed(255); 
  motor1.run(FORWARD); 
  motor2.setSpeed(255); 
  motor2.run(FORWARD); 
  motor3.setSpeed(255); 
  motor3.run(BACKWARD); 
  motor4.setSpeed(255); 
  motor4.run(BACKWARD); 
  motor5.setSpeed(255);
  motor5.run(FORWARD);
  motor6.setSpeed(255);
  motor6.run(BACKWARD);
} 

void Stop()
{
  motor1.setSpeed(0); 
  motor1.run(RELEASE); 
  motor2.setSpeed(0); 
  motor2.run(RELEASE); 
  motor3.setSpeed(0); 
  motor3.run(RELEASE); 
  motor4.setSpeed(0); 
  motor4.run(RELEASE); 
  motor5.setSpeed(0);
  motor5.run(RELEASE);
  motor6.setSpeed(0);
  motor6.run(RELEASE);
}
