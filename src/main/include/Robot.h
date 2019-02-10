/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/drive/MecanumDrive.h>
#include <frc/Joystick.h>
#include <frc/shuffleboard/Shuffleboard.h>
#include <frc/Compressor.h>
#include <frc/Solenoid.h>
#include <rev/CANSparkMax.h>
#include <rev/CANPIDController.h>

#include "RobotMap.h"
int dumbFunction(int x) {
	return x;
}
int y = dumbFunction(2); // y = 2

class Pho : public frc::TimedRobot {
	public:
		void RobotInit() override;
		void RobotPeriodic() override;
		void AutonomousInit() override;
		void AutonomousPeriodic() override;
		void TeleopInit() override;
		void TeleopPeriodic() override;
		void TestPeriodic() override;

	private:

	// Scheduler (For commands) WHY ARE YOU BROKENNNNN
	// Motors
		rev::CANSparkMax m_FrontLeftMotor {kFrontLeftMotorID, rev::CANSparkMaxLowLevel::MotorType::kBrushless};
		rev::CANSparkMax m_FrontRightMotor {kFrontRightMotorID, rev::CANSparkMaxLowLevel::MotorType::kBrushless};
		rev::CANSparkMax m_RearLeftMotor {kRearLeftMotorID, rev::CANSparkMaxLowLevel::MotorType::kBrushless};
		rev::CANSparkMax m_RearRightMotor {kRearRightMotorID, rev::CANSparkMaxLowLevel::MotorType::kBrushless};
	// Drive base
	// We use mecanum wheels for strafing. This drive system abstracts the individual motors to be easier to control.
		frc::MecanumDrive m_Drive {m_FrontLeftMotor, m_RearLeftMotor, m_FrontRightMotor, m_RearRightMotor};
	// Joysticks
		frc::Joystick m_RightJoystick {0};
		frc::Joystick m_LeftJoystick {1};

	// Compressor
		frc::Compressor m_Compressor;

	// Solenoids
		frc::Solenoid m_HatchSolenoid {kHatchSolenoid};
};
 