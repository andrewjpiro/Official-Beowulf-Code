#ifndef RunShooterSlow_H_
#define RunShooterSlow_H_


#include "Commands/Subsystem.h"
#include "../Robot.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class RunShooterSlow: public Command {
public:
	RunShooterSlow();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
