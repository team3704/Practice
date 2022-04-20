#include "commands/TeleopDrive.hh"

#include <iostream>

using namespace std;

TeleopDriveArcadeCommand::TeleopDriveArcadeCommand(DriveTrainSubsystem* s0, TeleopUserInput* ui) : psDT{s0},  pUI{ui} {
	
}

void TeleopDriveArcadeCommand::Execute() {
	float s = (pUI->drive0.GetRawButton(1) ? 1 : 0.25);
	float th = pUI->drive0.GetY() * s;
	float tr = pUI->drive0.GetX() * s;
	psDT->dd.ArcadeDrive(th, tr);
}