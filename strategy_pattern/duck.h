#pragma once

#include "flyBehavior.h"
#include "quackBehavior.h"

class Duck
{
public:
	virtual ~Duck() {};
	void performFly() {};
	void performQuake() {};
	virtual void setFlyBehavior() = 0;
	virtual void getFlyBehavior() = 0;

private:
	FlyBehavior* fly_behavior_;
	QuackBehavior* quack_behavior_;
};