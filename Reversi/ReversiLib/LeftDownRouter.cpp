#include "LeftDownRouter.h"
#include "ChessBoard.h"

LeftDownRouter::LeftDownRouter(void)
{
}


LeftDownRouter::~LeftDownRouter(void)
{
}

std::string LeftDownRouter::forward(const std::string& strPos)
{
	ChessBoard board;
	return board.getLeftDownPos(strPos);
}