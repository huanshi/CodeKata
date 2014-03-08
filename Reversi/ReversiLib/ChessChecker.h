#pragma once

#include <string>

#include "AbstractRouter.h"

enum RouterDirection {
	LEFT,
	RIGHT,
	UP,
	DOWN,
	LEFT_UP,
	RIGHT_UP,
	LEFT_DOWN,
	RIGHT_DOWN
};

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
	bool canPlace(AbstractRouter& router, char color, const std::string& strPos);
	bool canPlaceThroughLeft(char color,const std::string& strPos);
	bool canPlaceThroughRight(char color,const std::string& strPos);
	bool canPlaceThroughUp(char color,const std::string& strPos);
	bool canPlaceThroughDown(char color,const std::string& strPos);
	bool canPlaceThroughLeftUp(char color,const std::string& strPos);
	bool canPlaceThroughRightUp(char color,const std::string& strPos);

	const std::string* m_pChessBoard;
};

