#pragma once

#include <string>

#include "ChessBoard.h"

class AbstractRouter
{
public:
	//AbstractRouter(void);
	//~AbstractRouter(void);

	virtual std::string forward(const std::string& strPos) = 0;
	ChessBoard getChessBoard();
};

