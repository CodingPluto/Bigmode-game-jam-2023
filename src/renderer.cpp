#include "renderer.h"

void Renderer::Render()
{
	SDL_SetRenderDrawColor(renderer_, 255, 255, 255, 255);
	SDL_RenderClear(renderer_);
	for (auto VD : render_list_) {
			SDL_RenderCopy(
				renderer_, VD.second.texture,
				NULL, VD.second.rect));
	}
	SDL_RenderPresent(renderer_);
}

int Renderer::AddToRenderList(visual_data* obj_data, int z_order)
{	
	int ID = ID_previous_;
	ID_previous_ += 1;
	render_list_.insert(((render_list_.size() / max_z_order_) * z_order), {ID, obj_data});
	return ID;
}

void Renderer::RemoveFromRenderList(int ID, visual_data* obj_data)
{	
	render_list_.remove(render_list_.begin(), render_list_.end(), { ID, obj_data })
}
