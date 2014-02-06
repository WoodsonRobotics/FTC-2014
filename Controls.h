#pragma config(Hubs,  S1, HTServo,  HTMotor,  HTMotor,  none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S4,     IRsensor,       sensorHiTechnicIRSeeker600)
#pragma config(Motor,  motorA,          servo1,        tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C2_1,     rightwheel,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     leftwheel,     tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_1,     arm,           tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_2,     arm2,          tmotorTetrix, openLoop, reversed)

/*---------------DEFINITONS------------*/
#define LeftTrigger joy1Btn(7)
#define RightTrigger joy1Btn(8)
#define LeftButton joy1Btn(5)
#define RightButton joy1Btn(6)
#define Left joy1_y1
#define Right joy1_y2
#define power 75
#define waitTime 1000
#define noPower 0
#define print nxtDisplayTextLine
#define buttonPressed(x) if ( x ==  1)
#define up 1
#define down -1
#define Hello_my_name_is_Chris_Issing_and_this_is_my_main_function task main()
#define This_is_the_code_that_is_going_to_be_run_in_a_loop while(true)
#define This_line_configures_the_joystick getJoystickSettings(joystick);
#define This_line_sets_the_power_of_the_left_motor_to_the_the_value_of_the_left_analog_stick motor[leftwheel] = joystick.Left;
#define And_this_line_sets_the_power_of_the_right_motor_to_the_the_value_of_the_right_analog_stick motor[rightwheel] = joystick.Right;
/*--------------INCLUDES---------------*/
#include "JoystickDriver.c"

/*--------------METHODS----------------*/
void armraise ()
{
	motor[arm] = power;
	motor[arm2] = power;
	wait1Msec(waitTime);
	motor[arm] = noPower;
	motor[arm2] = noPower;
	print(5,"Raising the arm...");
}

void claw (int num)
{
	motor[motorA] = 100*num;
	wait1Msec(waitTime);
	motor[motorA] = noPower;
}

void beep()
{
	PlayTone(42,42);
}
