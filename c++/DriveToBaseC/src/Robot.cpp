#include "Robot.h"

Robot::Robot() :
	BackRightMotor(1),
	FrontRightMotor(2),
	FrontLeftMotor(3),
	BackLeftMotor(4),
	LeftMotors(FrontLeftMotor, BackLeftMotor),
	RightMotors(FrontRightMotor, BackRightMotor),
	DriveTrain(LeftMotors, RightMotors),
	DriveController(0)
{

}

void Robot::AutonomousInit()
{
	DriveToBaseline();
}

void Robot::AutonomousPeriodic()
{

}

void Robot::TeleopInit()
{

}

void Robot::TeleopPeriodic()
{
	Drive();
}

void Robot::TestPeriodic()
{

}

START_ROBOT_CLASS(Robot)
