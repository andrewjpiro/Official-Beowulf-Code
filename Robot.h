// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef _ROBOT_H
#define _ROBOT_H
#include "WPILib.h"
#include "Commands/Command.h"
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "Subsystems/Arm.h"
#include "Subsystems/Chassis.h"
#include "Subsystems/Conveyor.h"
#include "Subsystems/Intake.h"
#include "Subsystems/Lights.h"
#include "Subsystems/Pressurizer.h"
#include "Subsystems/Shifter.h"
#include "Subsystems/Shooter.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "OI.h"
class Robot : public IterativeRobot {
public:
	Command *autonomousCommand;
    SendableChooser *autoChooser;
	static Preferences* autoPref;


	static OI *oi;
	LiveWindow *lw;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static Pressurizer* pressurizer;
	static Shifter* shifter;
	static Shooter* shooter;
	static Chassis* chassis;
	static Arm* arm;
	static Intake* intake;
	static Conveyor* conveyor;
	static Lights* lights;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	virtual void RobotInit();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void TestPeriodic();
};
#endif
