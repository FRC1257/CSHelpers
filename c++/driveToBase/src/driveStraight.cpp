#include "Robot.h"

void Robot::DriveToBaseline(double speed)
{
	DriveTrain.ArcadeDrive(speed, 0);
	Wait(5);
	DriveTrain.ArcadeDrive(0, 0);
}

//Replace speed with the speed your robot drives at
