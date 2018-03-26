#ifndef SRC_ROBOT_H_
#define SRC_ROBOT_H_

#include <WPILib.h>

class Robot : public frc::IterativeRobot
{
public:
	Robot();

	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;

	void DriveToBaseline(double speed = 0.8, double duration = 4);
	void Drive();

private:
	Spark BackRightMotor;
	Spark FrontRightMotor;
	Spark FrontLeftMotor;
	Spark BackLeftMotor;

	SpeedControllerGroup LeftMotors;
	SpeedControllerGroup RightMotors;
	DifferentialDrive DriveTrain;
//
	XboxController DriveController;
};


#endif
