#include "Game.h"


Game::Game()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window = SDL_CreateWindow("Farm", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);

	running = true;
	count = 0;
	GameLoop();
}

Game::~Game()
{
	SDL_DestroyRenderer(m_Renderer);
	SDL_DestroyWindow(m_Window);
	SDL_Quit;
}

void Game::GameLoop()
{
	while (running)
	{
		lastFrame = SDL_GetTicks();
		static int lastTime;

		if (lastFrame >= (lastTime + 1000))
		{
			lastTime = lastFrame;
			frameCount = 0;
			count++;
		}

		Render();
		Input();
		Update();

		if (count > 3)
		{
			running = false;
		}
	}
}

void Game::Update()
{

}

void Game::Input()
{

}

void Game::Render()
{
	SDL_SetRenderDrawColor(m_Renderer, 0, 0, 0, 255);

	frameCount++;
	int TimerFPS = SDL_GetTicks() - lastFrame;
	if (TimerFPS < (1000/60))
	{
		SDL_Delay((1000 / 60) - TimerFPS);
	}


	SDL_RenderPresent(m_Renderer);
}






//void Game::Start()
//{
//	m_Running = true;
//
//	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
//	{
//		std::cout << "ERROR: Failed to initialise SDL!" << std::endl;
//		Stop();
//	}
//
//	if (IMG_Init(IMG_INIT_PNG) < 0)
//	{
//		std::cout << "ERROR: Failed to initialise SDL_image!" << std::endl;
//		Stop();
//	}
//
//	/*if (TTF_Init() == -1)
//	{
//		std::cout << "ERROR: Failed to initialise SDL_ttf!" << std::endl;
//		Stop();
//	}*/
//
//	m_Window = SDL_CreateWindow("RPG", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
//	if (!m_Window)
//	{
//		std::cout << "ERROR: Failed to create SDL_Window!" << std::endl;
//		Stop();
//	}
//
//	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
//	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
//
//	m_Renderer = SDL_CreateRenderer(m_Window, -1, SDL_RENDERER_PRESENTVSYNC);
//	if (!m_Renderer)
//	{
//		std::cout << "ERROR: Failed to create SDL_Renderer!" << std::endl;
//		Stop();
//	}
//
//	SDL_SetRenderDrawColor(m_Renderer, 0, 0, 0, 255);
//
//	GameLoop();
//}
//
//void Game::Stop()
//{
//	SDL_DestroyWindow(m_Window);
//	SDL_DestroyRenderer(m_Renderer);
//	m_Window = nullptr;
//	m_Renderer = nullptr;
//
//	IMG_Quit();
//	SDL_Quit();
//
//	m_Running = false;
//}
//
//void Game::GameLoop()
//{
//	Timer deltaTimer;
//	deltaTimer.Start();
//
//	while (m_Running)
//	{
//		HandleEvents();
//		Update(m_DeltaTime);
//
//		m_DeltaTime = static_cast<float>(deltaTimer.GetTicks()) / 1000.0f;
//		deltaTimer.Start();
//
//		Render();
//	}
//
//	Stop();
//}
//
//void Game::HandleEvents()
//{
//	SDL_Event event;
//	SDL_PollEvent(&event);
//
//	switch (event.type)
//	{
//	case SDL_QUIT:
//		m_Running = false;
//		break;
//	}
//}
//
//void Game::Update(float deltaTime)
//{
//}
//
//void Game::Render()
//{
//	SDL_RenderClear(m_Renderer);
//
//	static TTF_Font* font = TTF_OpenFont("assets/fonts/caliban.ttf", 12);
//	static SDL_Color colour = { 255, 255, 255, 255 };
//	SDL_Surface* textSurface = TTF_RenderText_Blended(font, std::string("FPS: " + std::to_string(1.0f / m_DeltaTime)).c_str(), colour);
//	SDL_Texture* textTexture = SDL_CreateTextureFromSurface(m_Renderer, textSurface);
//	SDL_Rect textBounds = { 5, 5, textSurface->w, textSurface->h };
//
//	SDL_RenderCopy(m_Renderer, textTexture, nullptr, &textBounds);
//
//	SDL_FreeSurface(textSurface);
//	SDL_DestroyTexture(textTexture);
//
//	SDL_RenderPresent(m_Renderer);
//}