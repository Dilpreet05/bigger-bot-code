#include "main.h"

bool isArcade = false;
bool isFlipped = false;
bool loop = false;

ez::Drive chassis ({-20,-19,-18}, {13,12,11}, 15 ,3.5,600,1.666);

void updateDrive(){

        if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_UP) == 1){
                isArcade = !isArcade;
        }

        if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_LEFT) == 1){

        }


        if(!isArcade){
                chassis.opcontrol_tank();
        }   else{
                chassis.opcontrol_arcade_standard(ez::SPLIT);
        }
        



        pros::delay(50);
}

void forwardBackwardLoop(){

        if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_A) == 1){
                loop = !loop;
        }

        while(loop){

                skillsCycle();
                
                if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_A) == 1){
                        loop = !loop;

                }
                pros::delay(50);
        }

}


