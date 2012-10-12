/* 
 * File:   LoginState.cpp
 * Author: cranberry
 * 
 * Created on 6 octobre 2012, 17:07
 */

#include "LoginState.h"

void LoginState::init()
{    
    TextInput input_login(sf::Vector2f(100,20), sf::Color::Green, 1, sf::Color::Magenta);
    input_login.SetPosition(sf::Vector2f(100,150));
    input_login.setName("login_input");
    TextInput input_pwd(sf::Vector2f(100,20), sf::Color::Cyan, 1, sf::Color::Magenta);
    input_pwd.SetPosition(sf::Vector2f(10,10));
    input_pwd.setName("pwd_input");
    
    Button btn_ok(sf::Vector2f(100,20), sf::Color::Red, 1, sf::Color::Black);
    btn_ok.SetPosition(200, 200);
    btn_ok.setName("ok_button");
    
    interface.addTextInput(input_login);
    interface.addTextInput(input_pwd);
    interface.addButton(btn_ok);
}

void LoginState::draw(sf::RenderWindow* window)
{
    this->interface.displayWidgets(window);
}