#include "main.h"

pros::Motor flywheel1(10,MOTOR_GEARSET_06,false);
pros::Motor flywheel2(1,MOTOR_GEARSET_06,true);
bool contBool = false;
bool brakeBool = false;

void setFlywheelBrake(){
        flywheel1.set_brake_mode(MOTOR_BRAKE_COAST);
        flywheel2.set_brake_mode(MOTOR_BRAKE_COAST);
}