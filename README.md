# DreamTeamU Cocos2dx Tutorial
***

## Sprites

A Sprite is a 2-D image. It can be animated, transformed or changed to suite the image needs of our application

##### How to Create a Sprite
```C++
auto sprite = Sprite::create("mysprite.png");
```

##### How to add a Sprite to your scene
```C++
this->addChild(mySprite, 0);
```

### Sprite Manipulations
#### Anchor Points

Anchor points are the point you start drawing your sprites from. By default, cocos will start to draw sprites from the center of the sprite. Anchor points will only affect transformable properites (positioning, scaling, rotation, skewing) of your sprites. *However*, it is important to note that Cocos2dx draws everything from the bottom left corner. So if you just create a sprite, it will draw it from the bottom left corner of the screen and only give the to top right corner of your sprite. 

##### How to set anchor points
```C++
// DEFAULT anchor point for all Sprites
sprite->setAnchorPoint(Vec2(0.5, 0.5));

// bottom left
sprite->setAnchorPoint(Vec2(0, 0));

// top left
sprite->setAnchorPoint(Vec2(0, 1));

// bottom right
sprite->setAnchorPoint(Vec2(1, 0));

// top right
sprite->setAnchorPoint(Vec2(1, 1));
```