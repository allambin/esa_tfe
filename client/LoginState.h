/* 
 * File:   LoginState.h
 * Author: cranberry
 *
 * Created on 6 octobre 2012, 17:07
 */

#ifndef LOGINSTATE_H
#define	LOGINSTATE_H

#include "GameState.h"
#include "Interface.h"
#include "TextInput.h"
#include "Button.h"
#include "ImageManager.h"
#include "BackgroundImage.h"
#include <iostream>


class LoginState : public GameState {
public:
    void init();
    void draw(sf::RenderWindow* window);
    void handleEvents(Game* game);
private:
    Interface interface;
    sf::RenderWindow* window;
};

#endif	/* LOGINSTATE_H */

