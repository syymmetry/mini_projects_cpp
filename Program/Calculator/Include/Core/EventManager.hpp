#pragma once
#include <SDL2/SDL.h>
#include <vector>
#include <functional>

class EventManager {
    public:
        void subscribe(std::function<void(SDL_Event&)> callback);
        void pollEvents();

    private:
        std::vector<std::function<void(SDL_Event&)>> subscribe;
};