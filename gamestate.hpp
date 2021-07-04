#ifndef GAMESTATE_HPP_
#define GAMESTATE_HPP_

#include <SFML/Graphics.hpp>

class GameState {
public:
  virtual void Update(long double time) = 0;
  virtual void Draw(sf::RenderWindow &window) = 0;
  virtual ~GameState() = default;
};

class MenuState : public GameState {
public:
  void Update(long double time);
  void Draw(sf::RenderWindow &window);
};

class PlayingState : public GameState {
public:
  PlayingState();
  void Update(long double time);
  void Draw(sf::RenderWindow &window);
};

#endif
