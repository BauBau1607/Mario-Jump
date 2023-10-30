#include "Menu.h"


Menu::Menu(float width, float height) {
	t1.loadFromFile("MARIO JUMP!.png");
	sBG.setTexture(t1);
	if (!font.loadFromFile("BarlowCondensed-Bold.ttf")) {
		//false;
	}
	menu[0].setFont(font);
	menu[0].setCharacterSize(40);
	menu[0].setFillColor(Color::Green);
	menu[0].setString("PLAY");
	menu[0].setPosition(400, 400);

	menu[1].setFont(font);
	menu[1].setCharacterSize(40);
	menu[1].setFillColor(Color::Red);
	menu[1].setString("OPTIONS");
	menu[1].setPosition(400, 450);

	menu[2].setFont(font);
	menu[2].setCharacterSize(40);
	menu[2].setFillColor(Color::Red);
	menu[2].setString("EXIT");
	menu[2].setPosition(400, 500);
}

void Menu::draw(RenderWindow& app) {
	app.draw(sBG);
	for (int i = 0; i < 3; i++) {
		app.draw(menu[i]);
	}

}

void Menu::setItemIndex() {
	selectedItemIndex = 0;
}
void Menu::MoveUp() {
	if (selectedItemIndex - 1 >= 0) {
		menu[selectedItemIndex].setFillColor(Color::Red);
		selectedItemIndex--;
		menu[selectedItemIndex].setFillColor(Color::Green);

	}
}
void Menu::MoveDown() {
	if (selectedItemIndex + 1 < 3) {
		menu[selectedItemIndex].setFillColor(Color::Red);
		selectedItemIndex++;
		menu[selectedItemIndex].setFillColor(Color::Green);

	}
}
