#include "Gameover.h"

Gameover::Gameover() {
    end.loadFromFile("Gameover.png");
    endz.setTexture(end);
    if (!font1.loadFromFile("GuritnoDemoRegular.ttf"))
    {
        //error
    }
    if (!font2.loadFromFile("sunglory.ttf"))
    {
        //error
    }
    text3.setFont(font2);
    text3.setString("High score:" + b);
    text3.setPosition(230, 310);
    text3.setCharacterSize(30);
    text3.setFillColor(Color::Cyan);
    text1.setFont(font2);
    text1.setString("Score:" + a);
    text1.setCharacterSize(70);
    text1.setFillColor(Color::Cyan);
    text1.setPosition(210, 230);
    text2.setFont(font2);
    text2.setString("PRESS ENTER TO PLAY AGAIN");
    text2.setCharacterSize(40);
    text2.setFillColor(Color::Red);
    text2.setPosition(140, 480);
}
void Gameover::setHS() {
    b = to_string(highscore);
    text3.setString("High score:" + b);
}
void Gameover::setA() {
    a = to_string(score);
    text1.setString("Score:" + a);
}
void Gameover::drawz(RenderWindow& app) {
    app.draw(endz);
    app.draw(text1);
    app.draw(text2);
    app.draw(text3);

}
