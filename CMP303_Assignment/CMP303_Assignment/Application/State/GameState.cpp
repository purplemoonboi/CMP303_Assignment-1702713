#include "GameState.h"
#include "../Events/Event.h"
#include "../Input/Keyboard.h"

GameState::GameState()
{}

GameState::~GameState()
{}

void GameState::OnStart()
{
	player = Entity(mScene, "player");
}

void GameState::OnUpdate(float deltaTime, Keyboard* keyboard, Gamepad* gamepad)
{
	//Execute the queued event.
	Event* event = inputHandler.HandleKeyboard(keyboard);

	if (event)
	{
		event->Execute(deltaTime, &player, keyboard->MouseX(), keyboard->MouseY());
	}
	
	mScene->GetRegistery()->UpdateRendererComponent("player");
}

void GameState::OnAttach()
{
	OnStart();
}

void GameState::OnDetach()
{
	//delete player;
}
