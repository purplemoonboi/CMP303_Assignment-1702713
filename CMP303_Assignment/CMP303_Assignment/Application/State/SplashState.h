#pragma once
#include "State.h"

class SplashState : public State
{
public:
	SplashState();
	virtual ~SplashState() override;
private:
	virtual void OnStart()	override;
	virtual void OnUpdate(float deltaTime) override;
	virtual void OnRender() override;
	virtual void OnAttach() override;
	virtual void OnDetach() override;
};
