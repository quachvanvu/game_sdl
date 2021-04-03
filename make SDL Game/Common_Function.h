
#ifndef COMMON_FUCTION_H_
#define COMMON_FUCTION_H_

#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>


const int SCREEN_WIDTH = 700;
const int SCREEN_HEIGHT = 750;


SDL_Texture* loadTexture(std::string path);

static SDL_Window* gWindow = NULL;
static SDL_Renderer* gRenderer = NULL;

static SDL_Texture* gTexture = NULL;

namespace SDLcommonfunc
{
	bool loadMedia();
	void close();
	SDL_Texture* loadTexture(std::string path);
}
#endif 

