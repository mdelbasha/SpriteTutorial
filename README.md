# DreamTeamU Cocos2dx Tutorial
***

## Sprites

A Sprite is a 2-D image. It can be animated, transformed or changed to suite the image needs of our application

##### How to Create a Sprite
```C++
auto mySprite = Sprite::create("mysprite.png");
```

##### How to add a Sprite to your scene
```C++
this->addChild(mySprite, 0);
```