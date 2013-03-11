// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Robot.h"
#include "Commands/BackAuto.h"
#include "Commands/FrontAuto.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
Pressurizer* Robot::pressurizer = 0;
Shifter* Robot::shifter = 0;
OI* Robot::oi = 0;
Shooter* Robot::shooter = 0;
Chassis* Robot::chassis = 0;
Intake* Robot::intake = 0;
Conveyor* Robot::conveyor = 0;
Arm* Robot::arm = 0;
Lights* Robot::lights = 0;
Preferences* Robot::autoPref = 0;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION

void Robot::RobotInit() {
	RobotMap::init();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	pressurizer = new Pressurizer();
	shifter = new Shifter();
	shooter = new Shooter();
	chassis = new Chassis();
	arm = new Arm();
	intake = new Intake();
	conveyor = new Conveyor();
	lights = new Lights();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	
	oi = new OI();
	
	lw = LiveWindow::GetInstance();
	
	autoChooser = new SendableChooser();
	autoChooser->AddDefault("BackCorner", new BackAuto());
    autoChooser->AddObject("FrontCorner", new FrontAuto());
    SmartDashboard::PutData("AutoChooser", autoChooser);
	autonomousCommand = new BackAuto();
	
    autoPref = Preferences::GetInstance();
  }
	
void Robot::AutonomousInit() {
	autonomousCommand = (Command*)(autoChooser->GetSelected());

	if (autonomousCommand != NULL)
		autonomousCommand->Start();
}
	
void Robot::AutonomousPeriodic() {
	Scheduler::GetInstance()->Run();
}
	
void Robot::TeleopInit() {
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to 
	// continue until interrupted by another command, remove
	// this line or comment it out.
	autonomousCommand->Cancel();
}
void Robot::TeleopPeriodic() {
	if (autonomousCommand != NULL)
		Scheduler::GetInstance()->Run();
	SmartDashboard::PutNumber("ShooterSpeed", oi->getCoDriver()->GetThrottle());
	SmartDashboard::PutNumber("ShooterEncoder", shooter->shooterEncoder->GetRate());
	SmartDashboard::PutNumber("DriveEncoder", chassis->rEncoder->GetDistance());
	SmartDashboard::PutNumber("ArmEncoder", arm->armEncoder->GetDistance());
	SmartDashboard::PutNumber("Gyro", chassis->gyro->GetAngle());
	SmartDashboard::PutBoolean("LightSensor", conveyor->lightSensor->Get());
	SmartDashboard::PutNumber("PrefRead",autoPref->GetDouble("DelayShooting", 0.0));

}
void Robot::TestPeriodic() {
	lw->Run();
}
START_ROBOT_CLASS(Robot);
