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
	
	auto sprite = Sprite::create("teddy_orig.png");

	// Setting an anchor point
	sprite->setAnchorPoint(Vec2(0, 0));

	this->addChild(sprite, 0);

	/////////////////////////////////////////////////////////////////////////
	return true;
}