#pragma config(Hubs,  S1, HTServo,  HTMotor,  HTMotor,  none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S4,     IRsensor,       sensorHiTechnicIRSeeker600)
#pragma config(Motor,  motorA,          servo1,        tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C2_1,     rightwheel,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     leftwheel,     tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_1,     arm,           tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_2,     arm2,          tmotorTetrix, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define monkey joystick
#define Left joy1_y1
#define Right joy1_y2
#define power 50




#include "JoystickDriver.c"

void armraise();
void claw(int num);/*
task main(){
	//Move Forward
	//	waitForStart();
		wait1Msec(2000);
    time1[T1] = 0;
		armraise();
		wait1Msec(1000);



		motor[rightwheel] = 0;
		motor[leftwheel] = 17;
		wait1Msec(1500);

		motor[rightwheel] = 15;
		motor[leftwheel] = 15;
		wait1Msec(2000);

		motor[leftwheel] = -32;
		motor[rightwheel] = 32;
		wait1Msec(1100);

		motor[rightwheel] = -13;
		motor[leftwheel] = -13;

		wait1Msec(1500);
		motor[rightwheel] = 0;
		motor[leftwheel] = 0;

		wait1Msec(1500);

		while (time1[T1]<30000) {
			int ir = SensorValue[IRsensor];
			nxtDisplayTextLine(0,"%d",ir);
			nxtDisplayTextLine(3,"%d",time1[T1]);
			if (time1[T1]> 25000)
						{
							motor[leftwheel] = 0;
							motor[rightwheel] = 0;
							claw(1);
						}
			switch(ir)
			{
				case 0:
					nxtDisplayTextLine(4,"Searching...");
						motor[rightwheel] = 25;
						motor[leftwheel] = 0;
					break;
				case 1:
					nxtDisplayTextLine(4,"turning Left...");
						motor[rightwheel] = 23;
						motor[leftwheel] = 0;
					break;
				case 2:
					nxtDisplayTextLine(4,"turning Left...");
						motor[rightwheel] = 20;
						motor[leftwheel] = 0;
					break;
				case 3:
					nxtDisplayTextLine(4,"turning Left...");
						motor[rightwheel] = 18;
						motor[leftwheel] = 0;
					break;
				case 4:
					nxtDisplayTextLine(4,"turning Left...");
						motor[rightwheel] = 15;
						motor[leftwheel] = 0;
					break;
				case 5:
					nxtDisplayTextLine(4, "move forwards...");
						motor[leftwheel] = 20;
						motor[rightwheel] = 20;
					break;
				case 6:
					nxtDisplayTextLine(4, "turning Right...");
						motor[rightwheel] = 0;
						motor[leftwheel] = 15;
					break;
				case 7:
					nxtDisplayTextLine(4, "turning Right...");
						motor[rightwheel] = 0;
						motor[leftwheel] = 18;
					break;
				case 8:
					nxtDisplayTextLine(4, "turning Right...");
						motor[rightwheel] = 0;
						motor[leftwheel] = 20;
					break;
				case 9:
					nxtDisplayTextLine(4, "turning Right...");
						motor[rightwheel] = 0;
						motor[leftwheel] = 23;
					break;
		  }
		}
	nxtDisplayTextLine(1,"DONE");
	motor[leftwheel] = 0;
	motor[rightwheel] = 0;

	wait1Msec(1000);

}

void armraise () {
	motor[arm] = 100;
	wait1Msec(1000);
	motor[arm] = 0;
	nxtDisplayTextLine(5,"raising the arm...");
}
void claw (int num) {
	motor[motorA] = 100*num;
	wait1Msec(1000);
	motor[motorA] = 0;
}
*/
//~~~~~~~~~~~~~~~~~~~~~~~~~~
task main() {
	armraise();

while (1==1)
{
	int	ir = SensorValue[IRsensor];
	nxtDisplayBigTextLine(0,"%d",ir);
 if (ir != 5) {
	motor[leftwheel] = 75;
	motor[rightwheel] = 75;
}
	else {
		motor[leftwheel] = 0;
	motor[rightwheel] = 0;
		motor[leftwheel] = -30;
		motor[rightwheel] = 30;
		wait1Msec(2000);
		motor[leftwheel] = 75;
		motor[rightwheel] = 75;

		claw(1);
	}

}
}

void armraise () {
	motor[arm] = power;
	motor[arm2] = power;
	wait1Msec(1000);
	motor[arm] = 0;
	motor[arm2] = 0;
	nxtDisplayTextLine(5,"raising the arm...");
}
void claw (int num) {
	motor[motorA] = 100*num;
	wait1Msec(1000);
	motor[motorA] = 0;
}
