#include "DelayShooting.h"
DelayShooting::DelayShooting()
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void DelayShooting::Initialize() {
	timer.Start();
}
// Called repeatedly when this Command is scheduled to run
void DelayShooting::Execute() {
	
}
// Make this return true when this Comma and no longer needs to run execute()
bool DelayShooting::IsFinished() {
	return timer.HasPeriodPassed(Robot::autoPref->GetDouble("DelayBetweenShots", 1.0));
}
// Called once after isFinished returns true
void DelayShooting::End() {
	timer.Stop();
	timer.Reset();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DelayShooting::Interrupted() {
}
