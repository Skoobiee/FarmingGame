#include <iostream>
#include "SDL.h"
#include "SDL_image.h"

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

	if (!IMG_Init(IMG_INIT_PNG) && IMG_INIT_PNG)
	{
		cout << "Failed to initialise PNG image" << endl;
	}




	cin.get();
	return 0;
}