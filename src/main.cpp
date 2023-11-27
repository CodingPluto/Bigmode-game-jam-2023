#include <iostream>
#include <my_header.h>
#include <SDL.h>
int main(int argc, char *argv[]){
  std::cout << "Here is my Test Program with a number of: " << a << std::endl;

  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
    std::cout << "SDL not initalised properly. Error: \n" << SDL_GetError() << std::endl;
    //throw "SDL not initalised, quitting program.";
  }
  

  SDL_Window* win = SDL_CreateWindow("Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 500, 500, 0);
  SDL_Renderer* renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);

  bool run = true;
  while (run)
  {
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
      if (event.type == SDL_QUIT)
      {
          run = false;
      }
    }
  }

  return 0;
}

/*
struct imageData
{
  texture image;
  int x, y;
  float size;
  unsigned int z_order;
};


void pass_to_renderer(texture image, int x, int y, unsigned int z_order)
{
  std::vector<imageData>.emplace_back()
}

class Player 
{
  SDL_image ima

};*/