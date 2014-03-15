#pragma once

#include <string>
#include "Router.h"
#include "RouterDirection.h"


class ChessChecker
{
public:
	ChessChecker(const std::string* chessBoard);
	~ChessChecker(void);

	bool isEmpty(const std::string& strChessPos);
	bool isWhite(const std::string& strChessPos);
	bool isBlack(const std::string& strChessPos);
	bool canPlace(RouterDirection direction, char color,const std::string& strPos);

private:
	char getChess(const std::string& strChessPos);
	bool isOutBorder(const std::string& strPos);
	bool canPlace(Router& router, char color, const std::string& strPos);
	bool isSameColor(char color,std::string currentPos);
	const std::string* m_pChessBoard;
};

