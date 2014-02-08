#pragma config(Hubs,  S1, HTServo,  HTMotor,  HTMotor,  none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S4,     IRsensor,       sensorHiTechnicIRSeeker600)
#pragma config(Motor,  motorA,          servo1,        tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C2_1,     rightwheel,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     leftwheel,     tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_1,     arm,           tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     arm2,          tmotorTetrix, openLoop, reversed)

#include "Controls.h"

Hello_my_name_is_Chris_Issing_and_this_is_my_main_function
{
	beep();
  waitForStart();
	print(5,"Starting...");
	This_is_the_code_that_is_going_to_be_run_in_a_loop
	{
	This_line_configures_the_joystick
	This_line_sets_the_power_of_the_left_motor_to_the_the_value_of_the_left_analog_stick
	And_this_line_sets_the_power_of_the_right_motor_to_the_the_value_of_the_right_analog_stick

	buttonPressed(LeftTrigger)
	{
		print(5, "Claw opening...");
		claw(up);
	}
	buttonPressed(RightTrigger)
	{
		print(5, "Claw closing...");
		claw(down);
	}

	buttonPressed(LeftButton)
	{
		print(5,"Arm descending...");
		armraise(1,5,500);
	}
	buttonPressed(RightButton)
	{
		print(5,"Arm raising...");
		armraise(-1,60,500);
	}
	}

}
