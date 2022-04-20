#pragma once

#include <ctre/Phoenix.h>
#include <frc2/command/SubsystemBase.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/motorcontrol/MotorControllerGroup.h>

class DriveTrainSubsystem : public frc2::SubsystemBase {
	private:
	WPI_TalonFX motorLeftFront{0};
	WPI_TalonFX motorLeftBack{0};
	WPI_TalonFX motorRightFront{0};
	WPI_TalonFX motorRightBack{0};
	frc::MotorControllerGroup mgLeft{motorLeftFront, motorLeftBack};
	frc::MotorControllerGroup mgRight{motorRightFront, motorRightBack};
	public:
	frc::DifferentialDrive dd{mgLeft, mgRight};
	void Periodic() override;
	DriveTrainSubsystem() { mgRight.SetInverted(true); };
};