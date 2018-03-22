/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <WPILib.h>
#include <IterativeRobot.h>
#include <ctre/Phoenix.h>

class Robot : public frc::IterativeRobot {
public:
	void RobotInit() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;

	// Drive to baseline
	void DriveToBaseline(double speed);

private:
	//If they use Sparks
	/*
	Spark BackRightMotor;
	Spark FrontRightMotor;
	Spark FrontLeftMotor;
	Spark BackLeftMotor;
	 */
	//If they use Talons
	/*
	WPI_TalonSRX BackRightMotor;
	WPI_TalonSRX FrontRightMotor;
	WPI_TalonSRX FrontLeftMotor;
	WPI_TalonSRX BackLeftMotor;
	*/
	//If they use Victors
	/*
	Victor BackRightMotor;
	Victor FrontRightMotor;
	Victor FrontLeftMotor;
	Victor BackLeftMotor;
	*/
	SpeedControllerGroup LeftMotors;
	SpeedControllerGroup RightMotors;
	DifferentialDrive DriveTrain;
};
