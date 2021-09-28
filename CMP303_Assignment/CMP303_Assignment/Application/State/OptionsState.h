#pragma once
#include "State.h"

class OptionsState : public State
{
public:
	OptionsState();
	virtual ~OptionsState() override;
private:
	virtual void OnStart()	override;
	virtual void OnUpdate(float deltaTime, Keyboard* keyboard = nullptr, Gamepad* gamepad = nullptr) override;
	//virtual void OnRender(sf::RenderWindow* window) override;
	virtual void OnAttach() override;
	virtual void OnDetach() override;
private:

};

