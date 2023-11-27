#ifndef RENDERER
#define RENDERER

#include <iostream>
#include <vector>
#include <SDL.h>
#include <visual_data.h>

Class Renderer{
private:
	std::vector<visual_data*> render_list_;
	SDL_Renderer* sdl2_rend_;
	SDL_Window* win_;
	void Render();

public:
	Renderer(SDL_Renderer* sdl2_rend, SDL_Window* win);
	int AddToRenderList(visual_data* obj_data, int z_order);
	void RemoveFromRenderList(int ID);
}


#endif // RENDERER