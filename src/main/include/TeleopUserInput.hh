#pragma once

#include <frc/Joystick.h>
#include <frc/XboxController.h>
#include <frc2/command/button/JoystickButton.h>

using namespace frc;
using namespace frc2;

class TeleopUserInput {
	public:
	// flight stick for driving
	Joystick drive0{0};
	// (may not be required) also for driving with drive0
	Joystick drive1{1};
	// XBox style controller for robot manipulation
	Joystick manip{2};
	// define buttons for the Xbox controller
	JoystickButton 
		manipbA {&manip, XboxController::Button::kA},
		manipbB {&manip, XboxController::Button::kB},
		manipbX {&manip, XboxController::Button::kX},
		manipbY {&manip, XboxController::Button::kY},
		manipbL {&manip, XboxController::Button::kLeftBumper},
		manipbR {&manip, XboxController::Button::kRightBumper},
		manipbSL{&manip, XboxController::Button::kLeftStick},
		manipbSR{&manip, XboxController::Button::kRightStick},
		manipbV {&manip, XboxController::Button::kStart},
		manipbM {&manip, XboxController::Button::kBack}
	;
};