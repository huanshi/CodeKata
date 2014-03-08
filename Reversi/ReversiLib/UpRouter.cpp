#include "UpRouter.h"

#include "ChessBoard.h"
UpRouter::UpRouter(void)
{
}


UpRouter::~UpRouter(void)
{
}
std::string UpRouter::forward(const std::string& strPos)
{
	ChessBoard board;
	return board.getUpPos(strPos);
}
