// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/Compress.h"
#include "Commands/ConveyIn.h"
#include "Commands/ConveyModeSwitch.h"
#include "Commands/ConveyOut.h"
#include "Commands/ConveyorRepeat.h"
#include "Commands/GoToGround.h"
#include "Commands/IntakeModeSwitch.h"
#include "Commands/IntakeOnOff.h"
#include "Commands/IntakeRepeat.h"
#include "Commands/IntakeSwitch.h"
#include "Commands/LightsOn.h"
#include "Commands/ManualDrive.h"
#include "Commands/ManualShooter.h"
#include "Commands/PivotDown.h"
#include "Commands/PivotOff.h"
#include "Commands/PivotUp.h"
#include "Commands/Shift.h"
#include "Commands/SpoilSwitch.h"
#include "Commands/SwitchStop.h"
#include "Commands/BackCorners.h"
#include "Commands/FrontCorners.h"
#include "Commands/PyramidMode.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	coDriver = new Joystick(2);
	
	cRightStick = new JoystickButton(coDriver, 10);
	cRightStick->WhenPressed(new BackCorners());
	cLeftStick = new JoystickButton(coDriver, 9);
	cLeftStick->WhenPressed(new FrontCorners());
	cBack = new JoystickButton(coDriver, 7);
	cBack->WhenPressed(new SwitchStop());
	cStart = new JoystickButton(coDriver, 8);
	cStart->WhenPressed(new IntakeModeSwitch());
	cLeftBumper = new JoystickButton(coDriver, 5);
	cLeftBumper->WhileHeld(new PivotDown());
	cRightBumper = new JoystickButton(coDriver, 6);
	cRightBumper->WhileHeld(new PivotUp());
	cButtonX = new JoystickButton(coDriver, 3);
	cButtonX->WhileHeld(new ConveyOut());
	cButtonY = new JoystickButton(coDriver, 4);
	cButtonY->WhileHeld(new ConveyIn());
	cButtonA = new JoystickButton(coDriver, 1);
	cButtonA->WhenPressed(new PyramidMode());
	cButtonB = new JoystickButton(coDriver, 2);
	cButtonB->WhenPressed(new GoToGround());
	driver = new Joystick(1);
	
	dRightStick = new JoystickButton(driver, 10);
	dRightStick->WhenPressed(new Shift());     
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getCoDriver() {
	return coDriver;
}
Joystick* OI::getDriver() {
	return driver;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
