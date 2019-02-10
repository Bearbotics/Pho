/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"

#include <iostream>


void Pho::RobotInit() {
  // Stuff here runs as soon as the robot turns on. Settings should be initialized, etc here.
}

void Pho::RobotPeriodic() {
  // Stuff here runs as long as the robot is on. Things like dashboard reporting, etc should go here. 
  // Note that motors don't always have power here.

}

void Pho::AutonomousInit() {
  // runs at the start of "Sandstorm" period. Things like timers, variables, should be initialized here.

}

void Pho::AutonomousPeriodic() {
  //
}

void Pho::TeleopInit() {}

void Pho::TeleopPeriodic() {
  // The main command. It does the math for us.
  m_Drive.DriveCartesian(m_RightJoystick.GetY(), m_RightJoystick.GetX(), m_LeftJoystick.GetX());
}

void Pho::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Pho>(); }
#endif
