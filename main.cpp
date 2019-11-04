#include <iostream>
#include "SDL.h"
#include "SDL_image.h"
#define _CSurface_H_

using namespace std;

int main(int argc, char *argv[])
{
	//Creates the SDL window
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window = SDL_CreateWindow("Farm", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
	//SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
	//SDL_Delay(300);

	if (!IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)
	{
		cout << "Failed to initialise PNG image: " << IMG_GetError << endl;
	}

	SDL_Surface* imageSurface = NULL;
	SDL_Surface* windowSurface = NULL;

	imageSurface = IMG_Load("Assets/Grass.png"); //Have to be in FarmingGame folder

	if (imageSurface == NULL)
	{
		cout << "Failed to load image surface: " << IMG_GetError << endl;
	}
	imageSurface->w * 2222, imageSurface->h * 2222;
	SDL_BlitSurface(imageSurface, NULL, windowSurface, NULL);
	SDL_UpdateWindowSurface(window);

	cin.get();
	return 0;
}