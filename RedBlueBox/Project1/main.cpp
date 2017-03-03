#include "SDL.h"
#include <stdio.h>
#include <stdlib.h>

#pragma comment( lib, "lib/SDL2.lib")
#pragma comment( lib, "lib/SDL2main.lib")
#pragma comment( lib, "lib/SDL2test.lib")


int main(int argc, char* args[]) {

	SDL_Init(SDL_INIT_EVERYTHING); //initialize all SDL funtions

	SDL_Window* window;
	SDL_Renderer* renderer;


	
	SDL_Quit();
	return EXIT_SUCCESS;
}
