// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "AutonomousCommand.h"
#include "RunShooter.h"
#include "BackCorners.h"
#include "ShootOne.h"
#include "DelayShooting.h"
#include "Delay.h"
AutonomousCommand::AutonomousCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	AddParallel(new RunShooter());
	AddSequential(new BackCorners());
	
	AddSequential(new Delay());
	AddSequential(new ShootOne());
	AddSequential(new DelayShooting());
	AddSequential(new ShootOne());
	AddSequential(new DelayShooting());
	AddSequential(new ShootOne());
	AddSequential(new DelayShooting());

	
//	AddSequential(new ShooterOff());
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
