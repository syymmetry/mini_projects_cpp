#pragma once
#include <SDL2/SDL.h>
#include <memory>

class GraphicsManager {
    public:
        GraphicsManager(int w, int h, const char* title);
        ~GraphicsManager();
        SDL_Renderer* getRenderer() const;
        void clear();
        void present();

    private:
        SDL_Window* window;
        SDL_Renderer* render;
};