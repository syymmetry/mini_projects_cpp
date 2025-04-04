#pragma once
#include "GraphicsManager.hpp"
#include "EventManager.hpp"

class Widget {
    public:
        virtual void render(GraphicsManager& graphics) = 0;
        virtual void handleEvent(SDL_Event& event) = 0;
        virtual ~Widget() = default;
};