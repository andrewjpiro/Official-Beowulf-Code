// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "BackCorners.h"
BackCorners::BackCorners() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::arm);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void BackCorners::Initialize() {
	Robot::intake->spoiler->Set(DoubleSolenoid::kReverse);
	
}
// Called repeatedly when this Command is scheduled to run
void BackCorners::Execute() {
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=EXECUTE
	const double backAngle = Robot::autoPref->GetDouble("BackCornerAngle", -28.75);
	Robot::arm->controller->SetSetpoint(backAngle);
	Robot::arm->controller->Enable();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=EXECUTE
}
// Make this return true when this Command no longer needs to run execute()
bool BackCorners::IsFinished() {
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ISFINISHED
	return ((Robot::arm->armEncoder->GetDistance() - backAngle) <= 0.25 &&
			(Robot::arm->armEncoder->GetDistance() - backAngle) >= -0.25);    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ISFINISHED
}
// Called once after isFinished returns true
void BackCorners::End() {
	Robot::arm->controller->Disable();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BackCorners::Interrupted() {
	Robot::arm->controller->Disable();

}
