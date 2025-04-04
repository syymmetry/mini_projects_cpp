CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
SDL_FLAGS = $(shell pkg-config --cflags sdl2 SDL2_ttf)
SDL_LIBS = $(shell pkg-config --libs sdl2 SDL2_ttf)

SRC = $(wildcard src/*/*.cpp)
OBJ = $(SRC:.cpp=.o)
TARGET = calculator

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(SDL_LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(SDL_FLAGS) -Iinclude -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)