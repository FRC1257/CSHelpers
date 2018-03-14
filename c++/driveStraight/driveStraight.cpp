#include <WPILib.h>

void Robot::DriveToBaseline(double speed)
{
	DriveTrain.ArcadeDrive(speed, 0);
}

//Replace speed with the speed your robot drives at
