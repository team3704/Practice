
#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

#include "subsystems/DriveTrain.hh"
#include "TeleopUserInput.hh"

class TeleopDriveArcadeCommand : public frc2::CommandHelper<frc2::CommandBase, TeleopDriveArcadeCommand> {
	private:
	DriveTrainSubsystem* psDT;
	TeleopUserInput* pUI;
	public:
	explicit TeleopDriveArcadeCommand(DriveTrainSubsystem*, TeleopUserInput*);
	void Execute() override;
};