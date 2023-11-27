#ifndef IMAGE_DATA_H
#define IMAGE_DATA_H
#include <SDL.h>
struct image_data{
  SDL_Surface *surf = nullptr;
  int x, int y;
  unsigned short z_order = 128;
};



#endif //IMAGE_DATA_H