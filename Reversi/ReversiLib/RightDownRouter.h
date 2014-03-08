#pragma once
#include "abstractrouter.h"
class RightDownRouter :
	public AbstractRouter
{
public:
	RightDownRouter(void);
	~RightDownRouter(void);
	std::string forward(const std::string& strPos);
};

