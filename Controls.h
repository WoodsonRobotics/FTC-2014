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
#define buttonPress(x) if ( x ==  1)

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
