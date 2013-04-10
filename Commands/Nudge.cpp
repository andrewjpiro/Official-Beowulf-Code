// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Nudge.h"
Nudge::Nudge() 
:kCurrentSetpoint(0.0),
 kNewSetpoint(0.0),
 pressed(false),
 multiplyer(0.0)
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::arm);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void Nudge::Initialize() {
	kCurrentSetpoint = Robot::arm->controller->GetSetpoint();
}
// Called repeatedly when this Command is scheduled to run
void Nudge::Execute() {
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=EXECUTE
	
	const double nudgeAmount = 0.5;
	double value = Robot::oi->getCoDriver()->GetRawAxis(6);
	if(value)
	{
		pressed = true;
		multiplyer = value;
	}
	else if(pressed)
	{
		kNewSetpoint = kCurrentSetpoint + (nudgeAmount * multiplyer);
		pressed = false;
	}
	Robot::arm->controller->SetSetpoint(kNewSetpoint);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=EXECUTE
}
// Make this return true when this Command no longer needs to run execute()
bool Nudge::IsFinished() {
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ISFINISHED
	return false; // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ISFINISHED
}
// Called once after isFinished returns true
void Nudge::End() {
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Nudge::Interrupted() {

}