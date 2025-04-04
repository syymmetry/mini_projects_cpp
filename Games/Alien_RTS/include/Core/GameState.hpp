#pragma once

class Engine;


class GameState {
    public:
        virtual ~GameState() = default;
        virtual void handleEvents() = 0;
        virtual void update(float deltatime) = 0;
        virtual void render() = 0;
};