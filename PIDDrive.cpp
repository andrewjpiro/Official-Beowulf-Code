#include "PIDDrive.h"
#include "Preferences.h"
PIDDrive::PIDDrive(RobotDrive* robotDrive, Gyro* gyro)
:mRobotDrive(robotDrive),
 mGyro(gyro),
 mDriveAngle(0.0),
 mTurnP(0.0)
{
	
}

void PIDDrive::PIDWrite(float output)
{
	//(mGyro->GetAngle()+ mDriveAngle) * mTurnP
	mRobotDrive->Drive(output, 0.0);
}
void PIDDrive::SetDriveAngle(double angle)
{
	mDriveAngle = angle;
}
double PIDDrive::GetDriveAngle()
{
	return mDriveAngle;
}

void PIDDrive::SetTurnP(double value)
{
	mTurnP = value;
}
