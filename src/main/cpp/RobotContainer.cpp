// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"

#include <frc2/command/ParallelCommandGroup.h>
#include <frc2/command/SequentialCommandGroup.h>
#include <frc2/command/InstantCommand.h>

#include <iostream>

RobotContainer::RobotContainer() {
  // Initialize all of your commands and subsystems here
  
  // Configure the button bindings
  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {
  // Configure your button bindings here
  mUserInput.manipbA.WhenPressed(
    InstantCommand{
      [] {
        std::cout << "Lambda expressions FTW!" << std::endl;
      }
    }
  );
}

frc2::Command* RobotContainer::GetAutonomousCommand() {
  // All autonomous commands will run one after another in this group :)
  static frc2::SequentialCommandGroup* cg = new frc2::SequentialCommandGroup(
    cAutonomous
  );
  return cg;
}

frc2::Command* RobotContainer::GetTeleopCommand() {
  // All teleop commands will be run simultaniously within this group :)
  static frc2::ParallelCommandGroup* cg = new frc2::ParallelCommandGroup(
    cTeleopDriveArcadeCommand
  );
  return cg;
}
