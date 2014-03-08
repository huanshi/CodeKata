#include "RightDownRouter.h"

RightDownRouter::RightDownRouter(void)
{
}

RightDownRouter::~RightDownRouter(void)
{
}
std::string RightDownRouter::forward(const std::string& strPos)
{
	return getChessBoard().getRightDownPos(strPos);
}
