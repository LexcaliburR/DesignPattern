#pragma once


class FlyBehavior
{
public:
	virtual ~FlyBehavior() {};
	virtual void fly() = 0;
};