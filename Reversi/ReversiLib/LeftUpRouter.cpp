#include "LeftUpRouter.h"

LeftUpRouter::LeftUpRouter(void)
{
}


LeftUpRouter::~LeftUpRouter(void)
{
}

std::string LeftUpRouter::forward(const std::string& strPos)
{
	return getChessBoard().getLeftUpPos(strPos);
}