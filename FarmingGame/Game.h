#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_ttf.h"
#define _CSurface_H_

class Game
{
public:
	Game();
	~Game();
	void Start();
	void Stop();

private:
	SDL_Window* m_Window;
	SDL_Renderer* m_Renderer;

	void Update();
	void Input();
	void Render();

	bool running;
	int count;
	int frameCount, timerFPS, lastFrame;


	bool m_Running;
	float m_DeltaTime;

	void GameLoop();
	//void HandleEvents();
	//void Update(float deltaTime);
	//void Render();
};

