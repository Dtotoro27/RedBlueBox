#include "SDL.h"
#include <stdio.h>
#include <stdlib.h>

#pragma comment( lib, "lib/SDL2.lib")
#pragma comment( lib, "lib/SDL2main.lib")
#pragma comment( lib, "lib/SDL2test.lib")

int main(int argc, char* args[]) {
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Surface* window = NULL;
	SDL_Surface* red = NULL;
	SDL_Surface* blue = NULL;

	window = SDL_CreateWindow("Box", SDL_WINDOW_CENTERED, SDL_WINDOW_CENTERED, 640, 450);

	red = SDL_LoadBMP("rojo.bmp");

	SDL_BlitSurface(red, NULL, window, NULL);

	SDL_UpdateWindowSurface(window);
	SDL_FreeSurface(window);
	SDL_FreeSurface(red);
	SDL_FreeSurface(blue);


	SDL_ShowWindow();
	SDL_Quit();
	return EXIT_SUCCESS;
}
