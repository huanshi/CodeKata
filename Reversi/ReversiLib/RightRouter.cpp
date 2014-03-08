#include "RightRouter.h"

#include "ChessBoard.h"

RightRouter::RightRouter(void)
{
}


RightRouter::~RightRouter(void)
{
}

std::string RightRouter::forward(const std::string& strPos)
{
	ChessBoard board;
	return board.getRightPos(strPos);
}