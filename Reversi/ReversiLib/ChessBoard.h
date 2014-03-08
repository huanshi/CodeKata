#pragma once

#include <string>

class ChessBoard
{
public:
	ChessBoard(void);
	~ChessBoard(void);

	std::string getLeftPos(const std::string& strPos);
	std::string getRightPos(const std::string& strPos);
	std::string getUpPos(const std::string& strPos);
	std::string getDownPos(const std::string& strPos);
	std::string getLeftUpPos(const std::string& strPos);
	std::string getRightUpPos(const std::string& strPos);
	std::string getLeftDownPos(const std::string& strPos);
	std::string getRightDownPos(const std::string& strPos);

	bool isInverse(char chessColor, char otherChessColor);
};

