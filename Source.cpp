#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include "Menu.h"
#include"Process.h"
#include "Gameover.h"
using namespace sf;
using namespace std;

int main()
{
    srand(time(0));

    RenderWindow app(VideoMode(600, 800), "Mario Jump", Style::Close); 
    app.setFramerateLimit(60);
    Menu menu(app.getSize().x, app.getSize().y);
    menu.setItemIndex();
    Gameover final;
    Process process;
    process.setBegin();
    process.setPlat();
    int check = 0;
    bool mainz = 0;
    bool isFinal = 0;
    while (app.isOpen())
    {
        Event e;
        while (app.pollEvent(e))
        {

            switch (e.type) {
            case Event::KeyReleased:
                switch (e.key.code) {
                case Keyboard::Up:
                    menu.MoveUp();
                    break;
                case Keyboard::Down:
                    menu.MoveDown();
                    break;
                case Keyboard::Return:
                    switch (menu.GetPressedItem())
                    {
                    case 0:
                        check = 1;
                        break;
                    case 1:

                        break;
                    case 2:
                        app.close();
                        break;
                    }
                }
                break;
            case Event::Closed:
                app.close();
                break;
            }
        }
        app.clear();
        if (check == 0) menu.draw(app);
        if (check == 1) {
            if (Keyboard::isKeyPressed(Keyboard::Right)) {
                process.moveRight();
                mainz = 1;
            }
            if (Keyboard::isKeyPressed(Keyboard::Left)) {
                process.moveLeft();
                mainz = 0;
            }
            process.movePlat();
            process.posMain();
            process.setPos();
            process.setHScore();
            if (process.checkz() == 0) {

                isFinal = 1;
                final.setA();
                final.setHS();
                final.drawz(app);
                if (Keyboard::isKeyPressed(Keyboard::Enter)) {
                    process.setBegin();
                    process.setPlat();
                    process.setPos();
                    process.setStringz();
                    isFinal = 0;
                }
            }
            if (isFinal == 0) {
                process.draw(app);
                process.drawScore(app);

            }
            if (mainz == 1 && isFinal == 0) {

                process.draw1(app);
                process.nextmarioRight();
            }
            if (mainz == 0 && isFinal == 0) {

                process.draw2(app);
                process.nextmarioLeft();
            }
            process.setmario();
        }
        app.display();
    }
    return 0;
}