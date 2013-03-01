#ifndef DELAYSHOOTING_H_
#define DELAYSHOOTING_H_


#include "Commands/Subsystem.h"
#include "../Robot.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class DelayShooting: public Command {
public:
	DelayShooting();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
	Timer timer;
};

#endif
