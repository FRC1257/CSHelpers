#include "Robot.h"

void Robot::DriveToBaseline(double speed, double duration)
{
	DriveTrain.ArcadeDrive(speed, 0);
	Wait(duration);
	DriveTrain.ArcadeDrive(0, 0);
}

void Robot::Drive()
{
	double forwardSpeed = 0;
	double turnSpeed = 0;

	forwardSpeed = DriveController.GetY(GenericHID::JoystickHand::kLeftHand);
	turnSpeed = DriveController.GetX(GenericHID::JoystickHand::kRightHand);

	DriveTrain.ArcadeDrive(-forwardSpeed, turnSpeed);
}
