/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

package org.usfirst.frc.team1257.robot;

import com.ctre.phoenix.motorcontrol.can.WPI_TalonSRX;

import edu.wpi.first.wpilibj.*;
import edu.wpi.first.wpilibj.drive.*;

/**
 * The VM is configured to automatically run this class, and to call the
 * functions corresponding to each mode, as described in the IterativeRobot
 * documentation. If you change the name of this class or the package after
 * creating this project, you must also update the build.properties file in the
 * project.
 */
public class Robot extends IterativeRobot 
{
		//If they use Sparks
		/*
		Spark BackRightMotor;
		Spark FrontRightMotor;
		Spark FrontLeftMotor;
		Spark BackLeftMotor;
		 */
		//If they use Talons
		
		WPI_TalonSRX BackRightMotor;
		WPI_TalonSRX FrontRightMotor;
		WPI_TalonSRX FrontLeftMotor;
		WPI_TalonSRX BackLeftMotor;
		
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
	/**
	 * This function is run when the robot is first started up and should be
	 * used for any initialization code.
	 */
	@Override
	public void robotInit() 
	{
		LeftMotors = new SpeedControllerGroup(FrontLeftMotor, BackLeftMotor);
		RightMotors = new SpeedControllerGroup(FrontRightMotor, BackRightMotor);
		
		DriveTrain = new DifferentialDrive(LeftMotors, RightMotors);
	}

		@Override
	public void autonomousInit() 
	{
		DriveToBaseline(0.8);

	}
		
	public void DriveToBaseline(double speed)
	{
		DriveTrain.arcadeDrive(speed, 0);
		Timer.delay(5);
		DriveTrain.arcadeDrive(0, 0);
	}

	/**
	 * This function is called periodically during autonomous.
	 */
	@Override
	public void autonomousPeriodic() 
	{
		
	}

	/**
	 * This function is called periodically during operator control.
	 */
	@Override
	public void teleopPeriodic() 
	{
	}

	/**
	 * This function is called periodically during test mode.
	 */
	@Override
	public void testPeriodic() 
	{
	}
	
	private void driveForward() 
	{
		
	}
}
