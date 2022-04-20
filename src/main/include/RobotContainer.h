// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/Command.h>

#include "TeleopUserInput.hh"
#include "commands/ExampleCommand.h"
#include "commands/TeleopDrive.hh"
#include "subsystems/ExampleSubsystem.h"
#include "subsystems/DriveTrain.hh"

/**
 * This class is where the bulk of the robot should be declared.  Since
 * Command-based is a "declarative" paradigm, very little robot logic should
 * actually be handled in the {@link Robot} periodic methods (other than the
 * scheduler calls).  Instead, the structure of the robot (including subsystems,
 * commands, and button mappings) should be declared here.
 */
class RobotContainer {
  public:
  RobotContainer();

  frc2::Command* GetAutonomousCommand();
  frc2::Command* GetTeleopCommand();

  private:
  // UserInput
  TeleopUserInput mUserInput;
  // The robot's subsystems and commands are defined here...
  ExampleSubsystem sExample;
  DriveTrainSubsystem sDriveTrain;

  ExampleCommand cAutonomous{&sExample};
  TeleopDriveArcadeCommand cTeleopDriveArcadeCommand{&sDriveTrain, &mUserInput};

  void ConfigureButtonBindings();
};
