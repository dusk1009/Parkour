#ifndef __ANIMATION_H__
#define __ANIMATION_H__
#include "cocos2d.h"
USING_NS_CC;

//��������������
class AnimateUtil
{

public:
	static CCAnimate* createWithName(char* name, float delay, int loops);
};

#endif