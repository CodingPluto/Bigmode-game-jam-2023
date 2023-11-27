#include <iostream>
#include <my_header.h>
#include <SDL.h>
int main(int argc, char *argv[]){
  std::cout << "Here is my Test Program with a number of: " << a << std::endl;

  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
    std::cout << "SDL not initalised properly. Error: \n" << SDL_GetError() << std::endl;
    throw "SDL not initalised, quitting program.";
  }


  SDL_Window* win = SDL_CreateWindow("Test", 0, 0, 500, 500, 0);
  SDL_Renderer* renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);

  bool game_running = true;
  while (game_running)
  {
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
      if (event.type == )
      {

      }
    }
  }

  return 0;
}