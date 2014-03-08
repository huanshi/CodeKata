#pragma once
#include "abstractrouter.h"
class DownRouter :
	public AbstractRouter
{
public:
	DownRouter(void);
	~DownRouter(void);

	std::string forward(const std::string& strPos);
};

