/*---------------DEFINITONS------------*/
#define LeftTrigger joy1Btn(7)
#define RightTrigger joy1Btn(8)
#define LeftButton joy1Btn(5)
#define RightButton joy1Btn(6)
#define Left joy1_y1
#define Right joy1_y2
#define power 85
#define waitTime 75
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
#define This_sets
/*--------------INCLUDES---------------*/
#include "JoystickDriver.c"

/*--------------METHODS----------------*/
void armraise (int num, int power1, int timey)
{
	motor[arm] = power1 * num;
	motor[arm2] = power1 * num;
	wait1Msec(timey);
	motor[arm] = noPower;
	motor[arm2] = noPower;
}
/*void spinFlag()
{
	print(5,"Spinning Flag...");
	motor[flag] = power;
	wait1Msec(waitTime);
	motor[flag] = noPower;
}*/
void claw (int num)
{
	motor[motorA] = 100*num;
	wait1Msec(300);
	motor[motorA] = noPower;
}

void beep()
{
	PlayTone(42,42);

}
