#include "LeftRouter.h"

#include "ChessBoard.h"

LeftRouter::LeftRouter(void)
{
}


LeftRouter::~LeftRouter(void)
{
}

std::string LeftRouter::forward(const std::string& strPos)
{
	ChessBoard board;
	return board.getLeftPos(strPos);
}
