#pragma once
#include "Scene/Scene.h"
#include "Input/Keyboard.h"
#include "Input/GamePad.h"

//SFML
#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/System.hpp>

namespace sf
{
	class Window;
}

class Application
{
public:
	Application();
	~Application();
public:
	void Run();
private:
	void ProcessEvents(sf::RenderWindow& window, Keyboard& input, Scene& context);
private:
	static Application* sApp;
private:
	sf::Clock clock;
};

