#ifndef PIDDRIVE_H_
#define PIDDRIVE_H_
#include "Gyro.h"
#include "RobotDrive.h"
#include "PIDOutput.h"

class PIDDrive : public PIDOutput
{
public:
	PIDDrive(RobotDrive* robotDrive, Gyro* gyro);
	virtual void PIDWrite(float output);
	void SetDriveAngle(double angle);
	double GetDriveAngle();
	void SetTurnP(double value);
private:
	RobotDrive* mRobotDrive;
	Gyro* mGyro;
	double mDriveAngle;
	double mTurnP;
};

#endif
