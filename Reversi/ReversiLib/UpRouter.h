#pragma once
#include "abstractrouter.h"
class UpRouter :
	public AbstractRouter
{
public:
	UpRouter(void);
	~UpRouter(void);

	std::string forward(const std::string& strPos);
};

