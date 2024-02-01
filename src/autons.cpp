#include "main.h"

/////
// For installation, upgrading, documentations and tutorials, check out our website!
// https://ez-robotics.github.io/EZ-Template/
/////

// These are out of 127
const int DRIVE_SPEED = 101;  
const int TURN_SPEED = 90;
const int SWING_SPEED = 90;

///
// Constants
///
void default_constants() {
  chassis.pid_heading_constants_set(11, 0, 20);
  chassis.pid_drive_constants_set(.45, 0, 5);
  chassis.pid_turn_constants_set(5, 0.003, 35);
  chassis.pid_swing_constants_set(7, 0, 45);

  chassis.pid_turn_exit_condition_set(300_ms, 3_deg, 500_ms, 7_deg, 750_ms, 750_ms);
  chassis.pid_swing_exit_condition_set(300_ms, 3_deg, 500_ms, 7_deg, 750_ms, 750_ms);
  chassis.pid_drive_exit_condition_set(300_ms, 1_in, 500_ms, 3_in, 750_ms, 750_ms);

  chassis.slew_drive_constants_set(7_in, 80);
}


// . . .
// Make your own autonomous functions here!
// . . .


void skillsCycle(){

  chassis.pid_drive_set(-10_in,DRIVE_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(10_in,DRIVE_SPEED);
  chassis.pid_wait();

}

void spinFW(){
  flywheel1 = 127;
  flywheel2 = -127;
}

void stopFW(){
  flywheel1 = 0;
  flywheel2 = 0;
}

void intakeSpin(){
  intakeMotor = 127;
}

void outtake(){
  intakeMotor = -127;
}

void stopIntake(){
  intakeMotor = 0;
}

void grabberDown(){
  GrabberPiston1.set_value(true);  // Deploy the piston
  GrabberPiston2.set_value(true);
}

void grabberUp(){
  GrabberPiston1.set_value(false);  // Deploy the piston
  GrabberPiston2.set_value(false);
}
