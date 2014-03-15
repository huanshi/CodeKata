#include "Router.h"
#include "ChessBoard.h"

Router::Router(RouterDirection direction)
	:m_direction(direction)
{
}

Router::~Router(void)
{
}

std::string  Router::forward(const std::string & strPos)
{
	return ChessBoard::getInstance().getPos(strPos, m_direction);
}