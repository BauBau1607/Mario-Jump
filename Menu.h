#pragma once
#include<SFML/Graphics.hpp>
using namespace sf;
class Menu
{
public:
	Menu(float width, float height);
	void draw(RenderWindow& app);
	void MoveUp();
	void MoveDown();
	void setItemIndex();
	int GetPressedItem() {
		return selectedItemIndex;
	}

private:
	int selectedItemIndex;
	Font font;
	Text menu[3];
	Texture t1;
	Sprite sBG;
};


