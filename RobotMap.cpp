// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
Compressor* RobotMap::pressurizerCompressor = NULL;
DoubleSolenoid* RobotMap::shifterShifter = NULL;
CANJaguar* RobotMap::shooterShooter1 = NULL;
CANJaguar* RobotMap::shooterShooter2 = NULL;
CANJaguar* RobotMap::chassisFrontLeft = NULL;
CANJaguar* RobotMap::chassisRearLeft = NULL;
CANJaguar* RobotMap::chassisFrontRight = NULL;
CANJaguar* RobotMap::chassisRearRight = NULL;
RobotDrive* RobotMap::chassisRobotDrive = NULL;
CANJaguar* RobotMap::armArm1 = NULL;
CANJaguar* RobotMap::armArm2 = NULL;
Encoder* RobotMap::armEncoder = NULL;
DoubleSolenoid* RobotMap::intakeSpoiler = NULL;
CANJaguar* RobotMap::intakeIntake = NULL;
DoubleSolenoid* RobotMap::conveyorStopper = NULL;
CANJaguar* RobotMap::conveyorConveyor = NULL;
Relay* RobotMap::lightsLights = NULL;
DigitalInput* RobotMap::conveyorLightSensor = NULL;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	pressurizerCompressor = new Compressor(1, 1, 1, 3);
	
	
	shifterShifter = new DoubleSolenoid(1, 4, 8);      
	
	
	shooterShooter1 = new CANJaguar(7);
	
	
	shooterShooter2 = new CANJaguar(8);
	
	
	chassisFrontLeft = new CANJaguar(2);
	
	
	chassisRearLeft = new CANJaguar(3);
	
	
	chassisFrontRight = new CANJaguar(4);
	
	
	chassisRearRight = new CANJaguar(5);
	
	
	chassisRobotDrive = new RobotDrive(chassisFrontLeft, chassisRearLeft,
              chassisFrontRight, chassisRearRight);
	
	chassisRobotDrive->SetSafetyEnabled(true);
        chassisRobotDrive->SetExpiration(0.1);
        chassisRobotDrive->SetSensitivity(0.5);
        chassisRobotDrive->SetMaxOutput(1.0);
	armArm1 = new CANJaguar(9);
	
	
	armArm2 = new CANJaguar(10);
	
	
	armEncoder = new Encoder(4, 5);
	armEncoder->SetDistancePerPulse(1.0);
		armEncoder->SetPIDSourceParameter(Encoder::kDistance);
		armEncoder->Start();
		
	
	intakeSpoiler = new DoubleSolenoid(1, 7, 3);      
	
	
	intakeIntake = new CANJaguar(11);
	
	
	conveyorStopper = new DoubleSolenoid(1, 2, 6);      
	
	
	conveyorConveyor = new CANJaguar(12);
	
	
	
	lightsLights = new Relay(1, 2);
	lw->AddActuator("Lights", "Lights", lightsLights);
	
	conveyorLightSensor = new DigitalInput(8);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

