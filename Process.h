#pragma once
#include<SFML/Graphics.hpp>
#include<string>
#include<vector>
using namespace std;
using namespace sf;
struct point
{
	int x, y;
};

class Process {
protected:
	point dead[20], plat[20];
	Texture t1, t2, t3;
	vector<Texture> mario;
	Sprite sPlat1, sPlat, sBackgorund;
	vector<Sprite> marioMoveLeft;
	vector<Sprite> marioMoveRight;
	int playerX, playerY, height, z;
	float dx, dy;
	static int score, highscore, countRight, countLeft;
	Text text;
	Font font;
	string a, b;

public:
	Process();
	void setPlat();
	void setBegin();
	void moveRight();
	void moveLeft();
	void movePlat();
	void posMain();
	void setPos();
	int checkz();
	void setStringz();
	void setHScore();
	void drawScore(RenderWindow& app);
	void setmario();
	void nextmarioRight();
	void nextmarioLeft();
	void draw1(RenderWindow& app);
	void draw2(RenderWindow& app);
	void draw(RenderWindow& app);
};