#ifndef RENDERER
#define RENDERER

#include <iostream>
#include <vector>
#include <SDL.h>
#include <visual_data.h>

class Renderer{
private:
	std::vector<std::pair<int, visual_data*>> render_list_;
	SDL_Renderer* sdl2_rend_;
	SDL_Window* win_;
	const int max_z_order;
	int ID_previous_ = 0;

public:
	Renderer(SDL_Renderer* sdl2_rend, SDL_Window* win);
	int AddToRenderList(visual_data* obj_data, int z_order);
	void RemoveFromRenderList(int ID);
	void Render();
}


#endif // RENDERER