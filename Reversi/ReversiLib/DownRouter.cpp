#include "DownRouter.h"
#include "ChessBoard.h"

DownRouter::DownRouter(void)
{
}


DownRouter::~DownRouter(void)
{
}

std::string DownRouter::forward(const std::string& strPos)
{
	ChessBoard board;
	return board.getDownPos(strPos);
}
