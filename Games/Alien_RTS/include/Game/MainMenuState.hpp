#pragma once
#include "GameState.hpp"
#include "../Core/Engine.hpp"
#include "../Graphics/UI/Menu.hpp"
#include "../Audio/Music.hpp"
#include "../Graphics/Texture.hpp"

class MainMenuState : public GameState {
public:
    MainMenuState(Engine& engine);
    ~MainMenuState() override;

    void handleEvents() override;
    void update(float deltaTime) override;
    void render() override;

private:
    std::unique_ptr<Menu> menu;
    std::unique_ptr<Music> backgroundMusic;
    Texture background;
};