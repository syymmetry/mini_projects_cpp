#pragma once
#include <SDL2/SDL.h>
#include <memory>
#include "StateManager.hpp"


class Engine {
    public:
        Engine();
        ~Engine();


        void run();


    private:
        bool init();
        void handleEvents();
        void update(float deltaTime);
        void render();
        


        SDL_Window* window;
        SDL_Renderer* renderer;
        std::unique_ptr<StateManager> stateManager;
        bool isRunning();
};