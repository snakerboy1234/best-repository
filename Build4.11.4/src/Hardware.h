/*
 * hardware.h
 *
 *  Created on: Feb 1, 2016
 *      Author: Developer
 */
#ifndef HARDWARE_H
#define HARDWARE_H
#include "WPILib.h"
#include "CANTalon.h"
#include "AHRS.h"


class Hardware
{
public:
	Hardware();
	CANTalon*rightFlywheel;
	CANTalon*leftFlywheel;
	Spark*conveyor;
	Spark*kicker;
	Servo*lFlap;
	Servo*rFlap;
	Spark*climber;
	Spark*intake;
	Servo*hopper;
	Spark*hopperBouncerLeft;
	Spark*hopperBouncerRight;

	AHRS*navx;
	Encoder*shooterEncoder;
	Encoder*wheelEncoder;
	DigitalInput*kickerLimit;
	DigitalInput*gearButton;

	Timer*kickTimer;

 };
#endif


