#pragma once

#include "flyBehavior.h"


class FlyWithWing : public FlyBehavior
{
	virtual ~FlyWithWing() {};
	void fly() override;
};