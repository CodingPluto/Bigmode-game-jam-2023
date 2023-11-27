#ifndef RENDERER
#define RENDERER

#include <iostream>
#include <vector>
#include <SDL.h>

Class Renderer{
private:
	std::vector<image_data> render_list_;
	SDL_Renderer* sdl2_rend;

	void Render() {}

public:
	Renderer() {};

}


#endif // RENDERER