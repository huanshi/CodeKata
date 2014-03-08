#include "RightUpRouter.h"
#include "ChessBoard.h"
RightUpRouter::RightUpRouter(void)
{
}


RightUpRouter::~RightUpRouter(void)
{
}
std::string RightUpRouter::forward(const std::string& strPos)
{
	ChessBoard board;
	return board.getRightUpPos(strPos);
}
