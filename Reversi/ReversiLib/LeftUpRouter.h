#pragma once
#include "abstractrouter.h"
class LeftUpRouter :
	public AbstractRouter
{
public:
	LeftUpRouter(void);
	~LeftUpRouter(void);

	std::string forward(const std::string& strPos);
};

