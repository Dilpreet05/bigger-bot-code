#include "main.h"



extern bool isWingPistonLeft;
extern bool isWingPistonRight;

extern bool isHangExtended;

extern bool isGrabberExtended;


extern pros::ADIDigitalOut hangPiston;
extern pros::ADIDigitalOut BlockerPiston2;
extern pros::ADIDigitalOut BlockerPiston1;
extern pros::ADIDigitalOut GrabberPiston1;
extern pros:: ADIDigitalOut GrabberPiston2;

void UpdatePistons();