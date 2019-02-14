#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
	auto scene = Scene::create();
	auto layer = HelloWorld::create();
	scene->addChild(layer);

	return scene;
}

bool HelloWorld::init()
{
	if (!Layer::init())
	{
		return false;
	}

	////////////////// Only code between the comment lines //////////////////
	
	// Just creating a sprite
	auto sprite = Sprite::create("teddy_orig.png");

	// Just adding a sprite to our scene
	this->addChild(sprite, 0);

	/////////////////////////////////////////////////////////////////////////
	return true;
}