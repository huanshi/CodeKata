#pragma once
#include "abstractrouter.h"
class LeftRouter :
	public AbstractRouter
{
public:
	LeftRouter(void);
	~LeftRouter(void);

	std::string forward(const std::string& strPos);
};

