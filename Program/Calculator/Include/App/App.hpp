#pragma once
#include "GraphicsManager.hpp"
#include "EventManager.hpp"
#include "UI/Button.hpp"
#include "Calculator/Calculator.hpp"

class App {
    public:
        App();
        void run();

    private:
        GraphicsManager graphics;
        EventManager eventManager;
        std::unique_ptr<Widget> currentScreen;
};