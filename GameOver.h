#pragma once
#include "Process.h"
#include<SFML/Graphics.hpp>
using namespace sf;

class Gameover : public Process
{
private:
	Text text1, text2, text3;
	Font font1, font2;
	Texture end;
	Sprite endz;

public:
	Gameover();
	void setHS();
	void setA();
	void drawz(RenderWindow& app);

};

