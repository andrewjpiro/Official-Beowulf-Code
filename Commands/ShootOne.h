#ifndef SHOOTONE_H_
#define SHOOTONE_H_


#include "Commands/Subsystem.h"
#include "../Robot.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class ShootOne: public Command {
public:
	ShootOne();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
	bool seenOne;
};

#endif
