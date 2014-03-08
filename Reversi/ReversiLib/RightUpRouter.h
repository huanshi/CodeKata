#pragma once
#include "abstractrouter.h"
class RightUpRouter :
	public AbstractRouter
{
public:
	RightUpRouter(void);
	~RightUpRouter(void);

	std::string forward(const std::string& strPos);
};

