#include "RunShooterSlow.h"
RunShooterSlow::RunShooterSlow() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooter);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void RunShooterSlow::Initialize() {
	
}
// Called repeatedly when this Command is scheduled to run
void RunShooterSlow::Execute() {
	const double slowSpeed = 0.27;
	Robot::shooter->shooter1->Set(slowSpeed);
	Robot::shooter->shooter2->Set(slowSpeed);
}
// Make this return true when this Comma and no longer needs to run execute()
bool RunShooterSlow::IsFinished() {
	return false;
}
// Called once after isFinished returns true
void RunShooterSlow::End() {
	Robot::shooter->shooter1->Set(0.0);
	Robot::shooter->shooter2->Set(0.0);
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RunShooterSlow::Interrupted() {
}