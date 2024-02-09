#pragma once
#include "main.h"

// #include "EZ-Template/drive/drive.hpp"

// extern Drive chassis;
extern float valLeft;
extern float valRight;



void tuneForwardBackward();
void tuneHeading();
void tuneTurn();
void tuneSwing();


void default_constants();


void skills();
void match();


/* Methods that control subsystems */
void spinFW();
void stopFW();
void intakeSpin();
void outtake();
void stopIntake();
void grabberDown();
void grabberUp();
void leftWingDown();
void rightWingDown();
void wingsDown();
void leftWingUp();
void rightWingUp();
void wingsUp();



void matchCycle();
void skillsCycle();
void endOfSkills();
void startOfSkills();


/* misc */
void reset();

