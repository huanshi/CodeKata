#pragma once
#include "abstractrouter.h"

#include <string>

class RightRouter :
	public AbstractRouter
{
public:
	RightRouter(void);
	~RightRouter(void);

	std::string forward(const std::string& strPos);
};

