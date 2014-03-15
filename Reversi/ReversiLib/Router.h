#pragma once
#include <string>

#include "RouterDirection.h"

class Router
{
public:
	Router(RouterDirection direction);
	~Router(void);

	std::string  forward(const std::string & strPos);

private:
	RouterDirection m_direction;
};

