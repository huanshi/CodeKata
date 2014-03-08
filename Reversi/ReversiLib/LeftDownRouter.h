#pragma once
#include "abstractrouter.h"
class LeftDownRouter :
	public AbstractRouter
{
public:
	LeftDownRouter(void);
	~LeftDownRouter(void);

	std::string forward(const std::string& strPos);
};

