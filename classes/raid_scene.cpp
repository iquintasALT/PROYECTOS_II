#include "raid_scene.h"

void RaidScene::init() {
	string path = "./resources/tilemap/template.tmx";
	Map::addMap(mngr_, path);

	Player* player = new Player(mngr_, Point2D(300, 50));

	Enemy* enemy = new Enemy(mngr_, Point2D(480, 50));
}