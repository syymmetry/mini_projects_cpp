#pragma once
#include "widget.hpp"
#include "Label.hpp"

class Button : public Widget {
    public:
        Button(int x, int y, const std::string& text);
        void render(GraphicsManager& graphics) override;
        void handleEvent(SDL_Event& event) override;
        void setOnClick(std::function<void()> callback);

    private:
        SDL_Rect rect;
        Label label;
        std::function<void()> onCLick;
        bool isHovered = false;
};